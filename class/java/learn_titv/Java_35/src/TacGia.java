public class TacGia {
    private String tenTacGia;
    private Ngay36 ngaySinh;

    public TacGia(String tenTacGia, Ngay36 ngaySinh) {
        this.tenTacGia = tenTacGia;
        this.ngaySinh = ngaySinh;
    }

    public String getTenTacGia() {
        return tenTacGia;
    }

    public void setTenTacGia(String tenTacGia) {
        this.tenTacGia = tenTacGia;
    }

    public Ngay36 getNgaySinh() {
        return ngaySinh;
    }

    public void setNgaySinh(Ngay36 ngaySinh) {
        this.ngaySinh = ngaySinh;
    }

}
