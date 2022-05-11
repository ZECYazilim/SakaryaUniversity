package com.company;

import java.sql.*;
import java.util.Scanner;

public class veriTabani implements IveriTabani {
    private Connection baglanti;

    akilliCihaz cihaz = new akilliCihaz();

    @Override
    public void Veri(String ad, String sifre) {
        try {
            baglanti = DriverManager.getConnection("jdbc:postgresql://localhost:5432/NesneProje?user=postgres&password=1234");

            if (baglanti != null){
                System.out.println("\n**********************");
                System.out.println("Baglanti Kuruldu\nIslemler Gerceklestiriliyor...");
                System.out.println("**********************\n");
            }
            else{
                System.out.println("\n**********************");
                System.out.println("Baglanti Hatasi ! Lutfen ayarlarinizi kontrol ediniz.");
                System.out.println("**********************\n");
            }

            String sql = "SELECT * FROM \"Users\" WHERE \"name\"='"+ad+"' AND \"password\"='"+sifre+"'";
            Statement ment = baglanti.createStatement();
            ResultSet bulmak = ment.executeQuery(sql);

            if (bulmak.next()){
                System.out.println("\n*********;*************");
                System.out.println("Kullanici bulundu");
                System.out.println("**********************\n");
                System.out.println("\n**********************");
                System.out.println("Sn."+ad+" Hosgeldiniz");
                System.out.println("**********************\n");
                cihaz.Bekle();
            }
            else {
                System.out.println("\n**********************");
                System.out.println("User Not Found.");
                System.out.println("**********************\n");
                MIB.GetCustem();
            }
            bulmak.close();
            ment.close();
            bulmak.close();

;

        }
        catch (SQLException throwables) {
            throwables.printStackTrace();
        }



    }
}
