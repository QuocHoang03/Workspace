import java.util.Date;

public class Sach {
    protected String maSach, nxb;
    protected Date ngayNhap;
    protected float donGia;
    protected int soLuong;

    public Sach(String maSach, String nxb, Date ngayNhap, float donGia, int soLuong) {
        this.maSach = maSach;
        this.nxb = nxb;
        this.ngayNhap = ngayNhap;
        this.donGia = donGia;
        this.soLuong = soLuong;
    }

    public String getMaSach() {
        return maSach;
    }

    public void setMaSach(String maSach) {
        this.maSach = maSach;
    }

    public String getNxb() {
        return nxb;
    }

    public void setNxb(String nxb) {
        this.nxb = nxb;
    }

    public Date getNgayNhap() {
        return ngayNhap;
    }

    public void setNgayNhap(Date ngayNhap) {
        this.ngayNhap = ngayNhap;
    }

    public float getDonGia() {
        return donGia;
    }

    public void setDonGia(float donGia) {
        this.donGia = donGia;
    }

    public int getSoLuong() {
        return soLuong;
    }

    public void setSoLuong(int soLuong) {
        this.soLuong = soLuong;
    }

    @Override
    public String toString() {
        return "Sach [maSach=" + maSach + ", nxb=" + nxb + ", ngayNhap=" + ngayNhap + ", donGia=" + donGia
                + ", soLuong=" + soLuong + "]";
    }

}
