package com.company;

import java.util.concurrent.TimeUnit;

public class AgArayuzu  implements IAgArayuzu{
    private int yeniSicaklik;
    boolean sabit = false;
    @Override
    public void SicaklikGoruntule() {
        if (sabit == false){
        sicaklikAlgilayici s = new sicaklikAlgilayici();
        s.SicaklikOku();
        }
        else {
            System.out.println("Bu Seçenek Seçildi;");
        }
    }
    boolean sabit2 = false;
    @Override
    public void SogutucuAcma() {
        if (sabit2 == false){
            System.out.println("Soğutucu Çalıştırılıyor\n");
            try {
                TimeUnit.SECONDS.sleep(2);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Soğutucu Çalıştı\n");
            try {
                TimeUnit.SECONDS.sleep(1);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Sıcaklık Düşürülüyor\n");
            try {
                TimeUnit.SECONDS.sleep(2);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Ortam uygun koşullara getirildi\n");

            sabit2 = true;
            sabit3 = false;
        }
        else {
            System.out.println("Seçenek zaten seçili");
        }

    }
    boolean sabit3 =false;
    @Override
    public void SogutucuKapatma() {

        if (sabit2 == true && sabit3 == false){
            System.out.println("Soğutucu Kapatıldı...");
        }
        else if (sabit3 == false){
            System.out.println("Soğutucu Açık değil...");
        }

        if (sabit3 == true){
            System.out.println("Soğutucu açık");
        }


        sabit3 = false;
        sabit2 = false;
    }
}
