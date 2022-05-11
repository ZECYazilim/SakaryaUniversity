package com.company;

public class eyleyici implements IEyleyici{

    @Override
    public void sogutucuAc(IAgArayuzu ag) {
        ag.OpenRefrigent();
    }

    @Override
    public void sogutucuKapat(IAgArayuzu ag) {
        ag.CloseRefrigent();
    }
}
