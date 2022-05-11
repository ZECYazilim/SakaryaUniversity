package com.company;

import java.sql.*;
import java.util.Scanner;

public class veriTabani implements IveriTabani {
    private Connection baglanti;

    akilliCihaz cihaz = new akilliCihaz();

    @Override
    public void Veri(String ad, String sifre) {
        try {
            baglanti = DriverManager.getConnection("jdbc:postgresql://localhost:5432/deneme?user=postgres&password=utku");

            if (baglanti != null){
                System.out.println("\n**********************");
                System.out.println("Bağlantı Başarılı");
                System.out.println("**********************\n");
            }
            else{
                System.out.println("\n**********************");
                System.out.println("Bağlantı Başarısız");
                System.out.println("**********************\n");
            }

            String sql = "SELECT * FROM \"urun\" WHERE \"ad\"='"+ad+"' AND \"sifre\"='"+sifre+"'";
            Statement ment = baglanti.createStatement();
            ResultSet bulmak = ment.executeQuery(sql);

            if (bulmak.next()){
                System.out.println("\n*********;*************");
                System.out.println("Kullanıcı bulundu");
                System.out.println("**********************\n");
                System.out.println("\n**********************");
                System.out.println(ad+" Hoşgeldin");
                System.out.println("**********************\n");
                cihaz.Bekle();
            }
            else {
                System.out.println("\n**********************");
                System.out.println("Kullanıcı Bulunmadı");
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
