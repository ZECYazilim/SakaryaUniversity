package com.company;

public class CihazBilgileri {
    private String renk;
    private double agirlik;
    Model model;

    private CihazBilgileri(CihazBilgileriBuilder builder){
        this.renk = builder.renk;
        this.agirlik = builder.agirlik;
        this.model=builder.model;
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
                "\nAgırlık : "+agirlik+
                "\n\n******* Model ******"+model;
    }

    public static class CihazBilgileriBuilder{
        private String renk;
        private double agirlik;
        Model model;

        public CihazBilgileriBuilder(String r){
            this.renk = r;
        }
        public CihazBilgileriBuilder agirlik (double a){
            this.agirlik = a;
            return this;
        }
        public CihazBilgileriBuilder model (int modelyil,String modelyer){
            this.model = new Model(modelyil,modelyer);
            return this;
        }
        public CihazBilgileri build(){
            return new CihazBilgileri(this);
        }



    }





}
