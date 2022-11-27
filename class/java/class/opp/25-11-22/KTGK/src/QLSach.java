import java.util.Scanner;

public class QLSach {
    private int n; // Số lượng sản phẩm
    sach[] s; // Mảng các sản phẩm

    public static Scanner sc = new Scanner(System.in);

    public void nhap() {
        System.out.print("Nhap so luong san pham: ");
        n = sc.nextInt();
        sc.nextLine();
        String ten, loai,linhvuc,lop,mon;
        int soluong;
        float donGia;
        s = new sach[n];
        for (int i = 0; i < n; ++i) {
            System.out.println("\nSan Pham " + (i + 1) + " :");
            System.out.print("Nhap ten san pham: ");
            ten = sc.nextLine();
            System.out.print("Nhap loai san pham: ");
            loai = sc.nextLine();
            if(loai == "CongNghe"){
                System.out.print("Nhap ten linh vuc: ");
                linhvuc = sc.nextLine();
            }else if(loai == "GiaoKhoa"){
                System.out.print("Nhap ten lop: ");
                lop = sc.nextLine();
                System.out.print("Nhap ten mon: ");
                mon = sc.nextLine();
            }
            System.out.print("Nhap so luong san pham: ");
            soluong = sc.nextInt();
            System.out.print("Nhap don gia san pham: ");
            donGia = sc.nextFloat();
            sc.nextLine();
            if(loai == "CongNghe"){
                s[i] = new congNghe(ten,loai,soluong,donGia,linhvuc);
            }else if(loai == "GiaoKhoa"){
                s[i] = new giaoKhoa(ten,loai,soluong,donGia,lop,mon);
            }
        }
    }

    public void xuat() {
        for (int i = 0; i < n; ++i) {
            System.out.println("\nSan Pham " + (i + 1) + " :" + s[i].toString());
        }
    }

    public float doanhThu() {
        float result = 0;
        for (int i = 0; i < n; ++i) {
            result += s[i].thanhTien();
        }
        return result;
    }

    public float doanh_thu_max() {
        float max = s[0].thanhTien();
        for (int i = 0; i < n; ++i) {
            if (max < s[i].thanhTien()) {
                max = s[i].thanhTien();
            }
        }
        return max;
    }



}
