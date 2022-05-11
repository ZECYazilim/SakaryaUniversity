package com.company;

import java.sql.*;
import java.util.Scanner;

public class MIB {

    public static void main(String[] args) throws SQLException{

        // Build tasarım deseni

        CihazBilgileri cihaz = new CihazBilgileri.CihazBilgileriBuilder("Mavi")
                .agirlik(500)
                .model(2021,"Türkiye")
                .build();
        System.out.println(cihaz);

        //Build Tasarım deseni
/*
        CihazBilgileri cihaz2 = new CihazBilgileri.CihazBilgileriBuilder("Kırmızı")
                .agirlik(600)
                .model(2020,"Türkiye")
                .build();

        System.out.println(cihaz2);
*/


        //program başlatma
        GetCustem();



        /*  Observer  */
        kontrolMerkezi k1= new kontrolMerkezi();
        veriTabaniKayit v1 = new veriTabaniKayit();
        Publisher publisher = new Publisher();
        publisher.attach(k1);
        publisher.attach(v1);//aboneler kaydedildi
        publisher.notify("bitiş "); // bilgiler dağıtıldı


    }




    public static void GetCustem(){
        veriTabani vt = null;
        try {
            vt = new veriTabani();
        } catch (Exception e) {
            e.printStackTrace();
        }
        Scanner scan = new Scanner(System.in);
        System.out.println("\nHOŞGELDİNİZ");
        System.out.print("Kullanıcı adı: ");
        String _ad,_sifre;
        _ad=scan.nextLine();
        System.out.print("Şifre giriniz: ");
        _sifre = scan.nextLine();
        vt.Veri(_ad,_sifre);

    }

}
