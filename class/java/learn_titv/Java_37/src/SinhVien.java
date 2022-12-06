public class SinhVien {
    private String maSinhVien, hoVaTen;
    private Ngay37 ngaySinh;
    private double diemTrungBinh;
    private Lop lop;

    public SinhVien(String maSinhVien, String hoVaTen, Ngay37 ngaySinh, double diemTrungBinh, Lop lop) {
        this.maSinhVien = maSinhVien;
        this.hoVaTen = hoVaTen;
        this.ngaySinh = ngaySinh;
        this.diemTrungBinh = diemTrungBinh;
        this.lop = lop;
    }

    public String getMaSinhVien() {
        return maSinhVien;
    }

    public void setMaSinhVien(String maSinhVien) {
        this.maSinhVien = maSinhVien;
    }

    public String getHoVaTen() {
        return hoVaTen;
    }

    public void setHoVaTen(String hoVaTen) {
        this.hoVaTen = hoVaTen;
    }

    public Ngay37 getNgaySinh() {
        return ngaySinh;
    }

    public void setNgaySinh(Ngay37 ngaySinh) {
        this.ngaySinh = ngaySinh;
    }

    public double getDiemTrungBinh() {
        return diemTrungBinh;
    }

    public void setDiemTrungBinh(double diemTrungBinh) {
        this.diemTrungBinh = diemTrungBinh;
    }

    public Lop getLop() {
        return lop;
    }

    public void setLop(Lop lop) {
        this.lop = lop;
    }

    public String layTenKhoa(){
        return this.lop.getTenKhoa();
    }

    public boolean kiemTraThiDat(){
        return this.diemTrungBinh >=5;
    }

    public boolean kiemTraCungNgaySinh(SinhVien svKhac){
        return this.ngaySinh.equals(svKhac.ngaySinh);
    }
}
