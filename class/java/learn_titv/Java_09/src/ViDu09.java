import java.util.Scanner;

public class ViDu09 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap vao ho va ten: ");
        String hoVaTen = sc.nextLine();

        System.out.print("Nhap ma sinh vien: ");
        long maSinhVien = sc.nextLong();

        System.out.print("Nhap vao diem thi: ");
        float diemThi = sc.nextFloat();

        System.out.println("--------------------");
        System.out.println("Ho va ten: "+hoVaTen);
        System.out.println("Ma sinh vien: "+maSinhVien);
        System.out.println("Diem thi: "+diemThi);
        sc.close();
    }
}
