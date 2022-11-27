public class congNghe extends sach {
    private String linhvuc;

    public congNghe(String ten, String loai, int soLuong, float donGia, String linhvuc) {
        super(ten, loai, soLuong, donGia);
        this.linhvuc = linhvuc;
    }

    public String getLinhvuc() {
        return linhvuc;
    }

    public void setLinhvuc(String linhvuc) {
        this.linhvuc = linhvuc;
    }

    @Override
    public String toString() {
        return "congNghe [linhvuc=" + linhvuc + "]";
    }

    public float thanhTien(String cong_nghe){
        return super.thanhTien();
    }
    
}
