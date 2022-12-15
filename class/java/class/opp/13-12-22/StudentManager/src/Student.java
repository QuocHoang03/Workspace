public class Student{
    private String maSinhVien;
    private String tenSinhVien;
    private String khoaHoc;
    private float diem;

    
    public Student(String maSinhVien) {
        this.maSinhVien = maSinhVien;
    }
    public Student(String maSinhVien, String tenSinhVien, String khoaHoc, float diem) {
        this.maSinhVien = maSinhVien;
        this.tenSinhVien = tenSinhVien;
        this.khoaHoc = khoaHoc;
        this.diem = diem;
    }
    public String getMaSinhVien() {
        return maSinhVien;
    }
    public void setMaSinhVien(String maSinhVien) {
        this.maSinhVien = maSinhVien;
    }
    public String getTenSinhVien() {
        return tenSinhVien;
    }
    public void setTenSinhVien(String tenSinhVien) {
        this.tenSinhVien = tenSinhVien;
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
        return "Student [maSinhVien=" + maSinhVien + ", tenSinhVien=" + tenSinhVien + ", khoaHoc=" + khoaHoc + ", diem="
                + diem + "]";
    }
    @Override
    public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((maSinhVien == null) ? 0 : maSinhVien.hashCode());
        return result;
    }
    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        Student other = (Student) obj;
        if (maSinhVien == null) {
            if (other.maSinhVien != null)
                return false;
        } else if (!maSinhVien.equals(other.maSinhVien))
            return false;
        return true;
    }
    
    
}