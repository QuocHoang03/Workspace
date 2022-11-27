import java.util.Scanner;

public class sp_list {
    private int n; // Số lượng sản phẩm
    san_pham[] spList; // Mảng các sản phẩm

    public static Scanner sc = new Scanner(System.in);

    public void nhap() {
        System.out.print("Nhap so luong san pham: ");
        n = sc.nextInt();
        sc.nextLine();
        String ten, loai;
        int soluong;
        float gia;
        spList = new san_pham[n];
        for (int i = 0; i < n; ++i) {
            System.out.println("\nSan Pham " + (i + 1) + " :");
            System.out.print("Nhap ten san pham: ");
            ten = sc.nextLine();
            System.out.print("Nhap loai san pham: ");
            loai = sc.nextLine();
            System.out.print("Nhap so luong san pham: ");
            soluong = sc.nextInt();
            System.out.print("Nhap gia san pham: ");
            gia = sc.nextFloat();
            sc.nextLine();
            spList[i] = new san_pham(ten, loai, soluong, gia);
        }
    }

    public void xuat() {
        for (int i = 0; i < n; ++i) {
            System.out.println("\nSan Pham " + (i + 1) + " :" + spList[i].toString());
        }
    }

    public float doanh_thu() {
        float sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += spList[i].getGia();
        }
        return sum;
    }

    public float doanh_thu_max() {
        float max = spList[0].getGia();
        for (int i = 0; i < n; ++i) {
            if (max < spList[i].getGia()) {
                max = spList[i].getGia();
            }
        }
        return max;
    }

}
