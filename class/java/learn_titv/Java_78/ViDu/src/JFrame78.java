import javax.swing.JFrame;

public class JFrame78 {
    public static void main(String[] agrs){
        JFrame jf = new JFrame();

        // Gán tên
        jf.setTitle("Vi Du JFrame");

        // Gán kích cỡ
        jf.setSize(600,400);

        // Gán vị trí hiển thị
        jf.setLocation(300,300);
        
        // Thoát khỏi chương trình khi đóng cửa sổ JFrame
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Cho phép hiển thị
        jf.setVisible(true);
    }
}
