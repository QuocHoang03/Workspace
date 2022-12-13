import java.awt.*;

import javax.swing.JButton;
import javax.swing.JFrame;

public class main79 extends JFrame{

    public main79(){
        this.setTitle("Main_GridLayout");
        this.setSize(600,400);

        // căn giữa cửa sổ chương trình
        this.setLocationRelativeTo(null);

        // set layout
        FlowLayout flowLayout = new FlowLayout(FlowLayout.CENTER,50,50);
        // GridLayout gridLayout = new GridLayout();
        // this.setLayout(flowLayout);
        // this.setLayout(flowLayout_1);
        this.setLayout(flowLayout);
        JButton jButton_1 = new JButton("1");
        JButton jButton_2 = new JButton("2");
        JButton jButton_3 = new JButton("3");

        // add thành phần
        this.add(jButton_1);
        this.add(jButton_2);
        this.add(jButton_3);


        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);
    }



    public static void main(String[] args) {
        new main79();
    }
}