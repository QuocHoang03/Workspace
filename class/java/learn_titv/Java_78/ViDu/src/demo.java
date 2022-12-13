import javax.swing.JFrame;

public class demo extends JFrame {

    public demo() {
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void showIt(String title, int width, int height) {
        this.setTitle(title);
        this.setSize(width, height);
        this.setLocation(width, height);
        this.setVisible(true);
    }

    public static void main(String[] args) {
        demo d1 = new demo();
        d1.showIt("WinDowWinDowWinDowWinDow", 300, 300);
    }

}
