public class HoaDonCaPhe {
    private String tenLoaiCaPhe;
    private double giaTien1Kg;
    private double khoiLuong;

    public HoaDonCaPhe(String tenLoaiCaPhe, double giaTien1Kg, double khoiLuong) {
        this.tenLoaiCaPhe = tenLoaiCaPhe;
        this.giaTien1Kg = giaTien1Kg;
        this.khoiLuong = khoiLuong;
    }

    public double tinhTongTien() {
        return this.giaTien1Kg * this.khoiLuong;
    }

    public boolean kiemTraKhoiLuongLonHon(Double kl) {
        return this.khoiLuong > kl;
    }

    public boolean kiemTraTongTienLonHon500K() {
        return this.tinhTongTien() > 500000;
    }

    public double giamGia(Double x) {
        if (this.kiemTraTongTienLonHon500K()) {
            return (x / 100) * this.tinhTongTien();
        } else {
            return 0;
        }
    }

    public double giaSauKhiGiam(Double x) {
        return this.tinhTongTien() - this.giamGia(x);
    }

    @Override
    public String toString() {
        return "HoaDonCaPhe [tenLoaiCaPhe=" + tenLoaiCaPhe + ", giaTien1Kg=" + giaTien1Kg + ", khoiLuong=" + khoiLuong
                + "]";
    }
    
}
