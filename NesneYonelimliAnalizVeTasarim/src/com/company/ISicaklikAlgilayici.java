package com.company;

import java.util.Observer;

public interface ISicaklikAlgilayici {

    public int SicaklikOku();
    public void attach(Observer ob);
    public void notifyAllObserver();
    public int getSicaklik();
    public void setSicaklik(int state);
}
