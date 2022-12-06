public class MainHd {
    public static void main(String[] args) {
        HoaDonCaPhe hd = new HoaDonCaPhe("Trung Nguyen", 500000, 1.5);
        System.out.println(hd.toString());
        System.out.println("Tong tien : " + hd.tinhTongTien());
        System.out.println("Kiem tra khoi luong > 2kg : " + hd.kiemTraKhoiLuongLonHon(2d));
        System.out.println("Kiem tra tong tien  > 500kg : " + hd.kiemTraTongTienLonHon500K());
        System.out.println("Giam gia cua Hd : " + hd.giamGia(10d));
        System.out.println("Sau Giam gia cua Hd : " + hd.giaSauKhiGiam(10d));
    }
}
