package controller;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import view.CounterView;

public class CounterListener implements ActionListener {
    CounterView ctv;

    public CounterListener(CounterView ctv) {
        this.ctv = ctv;
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String src = e.getActionCommand();
        System.out.println("Ban da nhan nut : "+src);
        if(src.equals("UP")){
            this.ctv.increment();
        }else if(src.equals("DOWN")){
            this.ctv.decrement();
        }

    }

}
