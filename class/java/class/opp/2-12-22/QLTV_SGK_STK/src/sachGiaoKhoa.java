import java.util.Date;

public class sachGiaoKhoa extends Sach {
    private String tinhTrang;

    public sachGiaoKhoa(String maSach, String nxb, Date ngayNhap, float donGia, int soLuong, String tinhTrang) {
        super(maSach, nxb, ngayNhap, donGia, soLuong);
        this.tinhTrang = tinhTrang;
    }

    public String getTinhTrang() {
        return tinhTrang;
    }

    public void setTinhTrang(String tinhTrang) {
        this.tinhTrang = tinhTrang;
    }

    @Override
    public String toString() {
        return super.toString()+"\t"+tinhTrang;
    }

    public double tinhThanhTien() {
        if (tinhTrang.equalsIgnoreCase("moi".trim())) {
            return soLuong * donGia;
        } else {
            return soLuong * donGia * 0.5;
        }
    }

}
