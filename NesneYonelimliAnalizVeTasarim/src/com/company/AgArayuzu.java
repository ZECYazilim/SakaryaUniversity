package com.company;

import java.util.concurrent.TimeUnit;

public class AgArayuzu  implements IAgArayuzu{
    boolean constant = false;
    @Override
    public void DisplayTemperature() {
        if (constant == false){
        sicaklikAlgilayici s = new sicaklikAlgilayici();
        s.SicaklikOku();
        }
        else {
            System.out.println("Bu Secenek Secildi.;");
        }
    }
    boolean sabit2 = false;
    @Override
    public void OpenRefrigent() {
        if (sabit2 == false){
            System.out.println("Sogutucu Ayarlanıyor.\n");
            try {
                TimeUnit.SECONDS.sleep(2);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Sogutucu Ayarlanıyor\n");
            try {
                TimeUnit.SECONDS.sleep(1);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Sicaklik Dusuruluyor.\n");
            try {
                TimeUnit.SECONDS.sleep(2);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Ortam uygun kosullara getirildi\n");

            sabit2 = true;
            sabit3 = false;
        }
        else {
            System.out.println("Secenek zaten secili.");
        }

    }
    boolean sabit3 =false;
    @Override
    public void CloseRefrigent() {

        if (sabit2 == true && sabit3 == false){
            System.out.println("Sogutucu kapatildi....");
        }
        else if (sabit3 == false){
            System.out.println("Sogutucu Acik Degil....");
        }

        if (sabit3 == true){
            System.out.println("Sogutucu acik.");
        }


        sabit3 = false;
        sabit2 = false;
    }
}
