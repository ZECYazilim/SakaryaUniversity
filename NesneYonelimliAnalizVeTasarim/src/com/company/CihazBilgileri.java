package com.company;

public class CihazBilgileri {
    private String renk;
    private double agirlik;
    Model model;

    public CihazBilgileri(String renk ,double agirlik,Model model){
        this.renk = renk;
        this.agirlik =agirlik;
        this.model=model;
    }

    public String getRenk() {
        return renk;
    }

    public void setRenk(String renk) {
        this.renk = renk;
    }

    public double getAgirlik() {
        return agirlik;
    }

    public void setAgirlik(double agirlik) {
        this.agirlik = agirlik;
    }

    public Model getModel() {
        return model;
    }

    public void setModel(Model model) {
        this.model = model;
    }

    @Override
    public String toString(){
        return "\n\n**** Cihaz Bilgileri ****"+
                "\nRenk : "+renk+
                "\nAgirlik : "+agirlik+
                "\n\n******* Model ******"+model;
    }






}
