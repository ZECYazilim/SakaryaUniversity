package com.company;

public class veriTabaniKayit implements IObserver{
    @Override
    public void guncelle(String m) {
        System.out.println("\n********************************");
        System.out.println(m+" bilgisi alindi.");
        System.out.println("Bilgiler Veri Tabanin Bildirildi");
        System.out.println("Bilgiler Veri Tabanina Kaydedildi");
        System.out.println("**********************************\n");
    }
}
