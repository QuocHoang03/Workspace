import java.util.Date;

public class sachThamKhao extends Sach{
    private double thue;

    public sachThamKhao(String maSach, String nxb, Date ngayNhap, float donGia, int soLuong, double thue) {
        super(maSach, nxb, ngayNhap, donGia, soLuong);
        this.thue = thue;
    }

    public double getThue() {
        return thue;
    }
    
    public void setThue(double thue) {
        this.thue = thue;
    }
    
    @Override
    public String toString() {
        return super.toString()+"\t"+thue;
    }

    public double tinhThanhTien(){
        return soLuong*donGia;
    }
}
