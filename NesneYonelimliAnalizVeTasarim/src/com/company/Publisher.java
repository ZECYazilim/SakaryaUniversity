package com.company;

import java.util.*;

public class Publisher implements ISubject{

    private List<IObserver> subscribers = new ArrayList<IObserver>();

    @Override
    public void attach(IObserver o) {
        subscribers.add(o);
    }

    @Override
    public void detach(IObserver o) {
        subscribers.remove(o);
    }

    @Override
    public void notify(String m) {
        for(IObserver subscriber: subscribers){
            subscriber.guncelle(m);
        }
    }
}
