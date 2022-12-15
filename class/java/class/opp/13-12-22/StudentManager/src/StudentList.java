import java.util.ArrayList;

public class StudentList{
    private ArrayList<Student> danhSach;

    public StudentList() {
        this.danhSach = new ArrayList<Student>();
    }

    public StudentList(ArrayList<Student> danhSach) {
        this.danhSach = danhSach;
    }

    // them sinh vien vao danh sach
    public void themSinhVien(Student sv){
        this.danhSach.add(sv);
    }

    // tim sinh vien theo ten
    public void timSinhVienTheoTen(String newTen){
        for (Student itemDs : danhSach) {
            String hoTenSv = itemDs.getTenSinhVien().trim();
            int indexTenSv = hoTenSv.lastIndexOf(" ");
            String tenSv = hoTenSv.substring(indexTenSv+1);
            if(tenSv.equalsIgnoreCase(newTen)){
                System.out.println(itemDs.toString());
            }
        }
    }

    // xoa sinh vien theo ma sinh vien
    public boolean xoaSinhVienTheoMa(Student sv){
        return this.danhSach.remove(sv);
    }

    // in sinh vien cung khoa hoc
    public void inSinhVienCungKhoaHoc(String newKhoaHoc){
        for (Student itemDs : danhSach) {
            if(itemDs.getKhoaHoc().equalsIgnoreCase(newKhoaHoc)){
                System.out.println(itemDs.toString());
            }
        }
    }

    // in danh sach sinh vien ra man hinh
    public void xuatSinhVien(){
        for (Student itemDs : danhSach) {
            System.out.println(itemDs.toString());
        }
    }
}