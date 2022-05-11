package com.company;

import java.util.Scanner;
import java.util.concurrent.TimeUnit;

public class akilliCihaz implements IAkilliCihaz{

    Scanner scan = new Scanner(System.in);
    AgArayuzu agArayuzu = new AgArayuzu();
    eyleyici eyleyici = new eyleyici();




    @Override
    public void Bekle() {
        System.out.println("\n**********;****************");
        System.out.println("*******   MENÜ    ********");
        System.out.println("|< 1 >| Sıcaklık Görüntüle");
        System.out.println("|< 2 >| Soğutucuyu Aç");
        System.out.println("|< 3 >| Soğutucuyu Kapat");
        System.out.println("|< 4 >| Çıkış ");
        System.out.println("\n**************************");
        System.out.print("BİR SEÇENEK SEÇİNİZ : ");
        int secenek = scan.nextInt();
        System.out.println("**************************\n");
        System.out.println();
        while (secenek != 4){

            switch (secenek){
                case 1:
                    agArayuzu.SicaklikGoruntule();
                    break;
                case 2:

                    eyleyici.sogutucuAc(agArayuzu);
                    break;
                case 3:

                    eyleyici.sogutucuKapat(agArayuzu);
                    break;
                default:
                    System.out.println("\n**********************");
                    System.out.println("BÖYLE BİR SEÇENEK YOK");
                    System.out.println("**********************\n");
                    break;

            }
            try {
                TimeUnit.SECONDS.sleep(1);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("\n**********************");
            System.out.println("Sistem Hazırlanıyor...");
            System.out.println("**********************\n");
            System.out.println("\n**********************");
            System.out.print("Yeni İşlem : ");
            secenek = scan.nextInt();
            System.out.println("**********************\n");
            Algilama();
            Kontrol();

        }

    }

    @Override
    public void Kapali() {
        System.out.println("\n************************");
        System.out.println("Sistem Kapatıldı");
        System.out.println("************************\n");
    }

    @Override
    public void Algilama() {
        try {
            TimeUnit.SECONDS.sleep(1);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("\n************************");
        System.out.println("İşlem Algılanıyor");
        System.out.println("************************\n");
    }

    @Override
    public void Kontrol() {
        try {
            TimeUnit.SECONDS.sleep(1);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("\n************************");
        System.out.println("İşlem Kontrol Ediliyor");
        System.out.println("************************\n");
    }
}
