public class MainSach {
    public static void main(String[] args) {
        Ngay36 ngay1 = new Ngay36(22, 06, 2003);
        Ngay36 ngay2 = new Ngay36(23, 04, 2004);
        Ngay36 ngay3 = new Ngay36(23, 04, 2004);

        TacGia tacGia1 = new TacGia("Pham Quoc Hoang", ngay1);
        TacGia tacGia2 = new TacGia("Pham Quoc Hoang2", ngay2);
        TacGia tacGia3 = new TacGia("Pham Quoc Hoang3", ngay3);

        Sach sach1 = new Sach("Lap trinh Java", 5000, 2000, tacGia1);
        Sach sach2 = new Sach("Lap trinh Java2", 6000, 3000, tacGia2);
        Sach sach3 = new Sach("Lap trinh Java3", 6000, 3000, tacGia3);
        sach1.inTenSach();
        sach2.inTenSach();

        System.out.println("So sanh sach 1 va 2 : " + sach1.kiemTraCungNam(sach2));
        System.out.println("So sanh sach 1 va 2 : " + sach2.kiemTraCungNam(sach3));

        System.out.println("Sach 1 giam 10% : "+sach1.giaSauKhiGiam(10));
    }
}
