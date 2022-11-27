public class sach {
    private String ten;
    private String loai;
    private int soLuong;
    private float donGia;

    public sach(String ten, String loai, int soLuong, float donGia) {
        this.ten = ten;
        this.loai = loai;
        this.soLuong = soLuong;
        this.donGia = donGia;
    }

    public String getTen() {
        return ten;
    }

    public void setTen(String ten) {
        this.ten = ten;
    }

    public String getLoai() {
        return loai;
    }

    public void setLoai(String loai) {
        this.loai = loai;
    }

    public int getSoLuong() {
        return soLuong;
    }

    public void setSoLuong(int soLuong) {
        this.soLuong = soLuong;
    }

    public float getDonGia() {
        return donGia;
    }

    public void setDonGia(float donGia) {
        this.donGia = donGia;
    }

    @Override
    public String toString() {
        return "sach [ten=" + ten + ", loai=" + loai + ", soLuong=" + soLuong + ", donGia=" + donGia + "]";
    }

    public float thanhTien(){
        return getSoLuong()*getDonGia();
    }
    
}
