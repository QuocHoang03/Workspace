public class Student {
    private String maSv;
    private String tenSv;
    private String khoaHoc;
    private float diem;
    public Student(String maSv, String tenSv, String khoaHoc, float diem) {
        this.maSv = maSv;
        this.tenSv = tenSv;
        this.khoaHoc = khoaHoc;
        this.diem = diem;
    }
    public Student(String maSv) {
        this.maSv = maSv;
    }
    public String getMaSv() {
        return maSv;
    }
    public void setMaSv(String maSv) {
        this.maSv = maSv;
    }
    public String getTenSv() {
        return tenSv;
    }
    public void setTenSv(String tenSv) {
        this.tenSv = tenSv;
    }
    public String getKhoaHoc() {
        return khoaHoc;
    }
    public void setKhoaHoc(String khoaHoc) {
        this.khoaHoc = khoaHoc;
    }
    public float getDiem() {
        return diem;
    }
    public void setDiem(float diem) {
        this.diem = diem;
    }
    @Override
    public String toString() {
        return "Student [maSv=" + maSv + ", tenSv=" + tenSv + ", khoaHoc=" + khoaHoc + ", diem=" + diem + "]";
    }
    
}
