package com.company;

import java.util.Observer;
import java.util.Random;

public class sicaklikAlgilayici implements ISicaklikAlgilayici{


    Random r = new Random();

    @Override
    public int SicaklikOku() {
        int sicaklik = (21 + (int) (r.nextInt(20)));
        System.out.println("\n**********************");
        System.out.println("Sıcaklık: "+sicaklik+" Derece");
        System.out.println("**********************\n");
        return sicaklik;
    }


    @Override
    public void attach(Observer ob) {

    }

    @Override
    public void notifyAllObserver() {

    }

    @Override
    public int getSicaklik() {
        return 0;
    }

    @Override
    public void setSicaklik(int state) {

    }


}
