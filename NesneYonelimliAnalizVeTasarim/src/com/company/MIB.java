package com.company;

import java.sql.*;
import java.util.Scanner;

public class MIB {

    public static void main(String[] args) throws SQLException{

        CihazBilgileri cihaz = new CihazBilgileri.CihazBilgileriBuilder("Eflatun")
                .agirlik(1000)
                .model(2022,"Turkiye")
                .build();
        System.out.println(cihaz);

        GetCustem();



        /*  Observer  */
        kontrolMerkezi k1= new kontrolMerkezi();
        veriTabaniKayit v1 = new veriTabaniKayit();
        Publisher publisher = new Publisher();
        publisher.attach(k1);
        publisher.attach(v1); 
        publisher.notify("Nesneler bildirildi."); 


    }




    public static void GetCustem(){
        veriTabani vt = null;
        try {
            vt = new veriTabani();
        } catch (Exception e) {
            e.printStackTrace();
        }
        Scanner scan = new Scanner(System.in);
        System.out.println("\nHOSGELDINIZ");
        System.out.print("Kullanici Adi: ");
        String _ad,_sifre;
        _ad=scan.nextLine();
        System.out.print("Sifre giriniz: ");
        _sifre = scan.nextLine();
        vt.Veri(_ad,_sifre);

    }

}
