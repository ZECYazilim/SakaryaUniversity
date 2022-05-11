package com.company;

public class Model {
    private int uretimYili;
    private String uretimYeri;

    public Model(int uretimYili,String uretimYeri){
        this.uretimYili = uretimYili;
        this.uretimYeri = uretimYeri;
    }

    public int getUretimYili() {
        return uretimYili;
    }

    public void setUretimYili(int uretimYili) {
        this.uretimYili = uretimYili;
    }

    public String getUretimYeri() {
        return uretimYeri;
    }

    public void setUretimYeri(String uretimYeri) {
        this.uretimYeri = uretimYeri;
    }

    public void BilgileriGunvelle(int yeniUretimYili, String yeniUretimYeri){
        this.setUretimYili(yeniUretimYili);
        this.setUretimYeri(yeniUretimYeri);
    }
    @Override
    public String toString(){
        return "\nUretim Yili : "+uretimYili+"\nUretim Yeri : " + uretimYeri;
    }
}
