public class giaoKhoa extends sach{
    private String lop;
    private String mon;
    
    public giaoKhoa(String ten, String loai, int soLuong, float donGia, String lop, String mon) {
        super(ten, loai, soLuong, donGia);
        this.lop = lop;
        this.mon = mon;
    }

    public String getLop() {
        return lop;
    }

    public void setLop(String lop) {
        this.lop = lop;
    }

    public String getMon() {
        return mon;
    }

    public void setMon(String mon) {
        this.mon = mon;
    }

    public float thanhTien(String giao_khoa){
        return super.thanhTien()*(90/100);
        }

}
