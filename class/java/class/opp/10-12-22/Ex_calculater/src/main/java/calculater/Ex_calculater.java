package calculater;
import java.awt.*;
import java.awt.event.*;

public class AWTAccumulator extends Frame{
    private TextField tfNum1;
    private TextField tfNum2;
    private TextField tfResult;
    
}

public AWTAccumulator() {
      setLayout(new GridLayout(2, 2));
         // "super" Frame (Container) sets layout to GridLayout of 2 rows 2 columns.

      add(new Label("Enter an Integer: "));  // "super" Frame adds an anonymous Label

      tfNum1 = new TextField(10); // Construct TextField
      add(tfNum1);                // "super" Frame adds TextField

      tfNum1.addActionListener(new TFInputListener());
         // "tfInput" is the source object that fires an ActionEvent upon entered.
         // The source add an anonymous instance of TFInputListener as an ActionEvent
         //   listener, which provides an ActionEvent handler called actionPerformed().
         // Hitting "enter" on tfInput invokes actionPerformed().

      add(new Label("The Accumulated Sum is: "));  // "super" Frame adds an anonymous Label

      tfNum2 = new TextField(10); // allocate TextField
      tfNum2.setEditable(false);  // read-only
      add(tfOutput);                // "super" Frame adds TextField

      setTitle("AWT Accumulator");  // "super" Frame sets title
      setSize(350, 120);  // "super" Frame sets initial window size
      setVisible(true);   // "super" Frame shows
   }


public class Ex_calculater {

    public static void main(String[] args) {
        System.out.println("Hello World!");
    }
}
