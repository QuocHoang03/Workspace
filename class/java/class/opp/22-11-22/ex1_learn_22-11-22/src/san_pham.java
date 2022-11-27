public class san_pham {
    private String ten;
    private String loai;
    private int soluong;
    private float gia;

    public san_pham(String ten, String loai, int soluong, float gia) {
        this.ten = ten;
        this.loai = loai;
        this.soluong = soluong;
        this.gia = gia;
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

    public int getSoluong() {
        return soluong;
    }

    public void setSoluong(int soluong) {
        this.soluong = soluong;
    }

    public float getGia() {
        return gia;
    }

    public void setGia(float gia) {
        this.gia = gia;
    }

    @Override
    public String toString() {
        return "san_pham [ten=" + ten + ", loai=" + loai + ", soluong=" + soluong + ", gia=" + gia + "]";
    }

}
