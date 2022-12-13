import java.util.ArrayList;

public class StudentList {
    private ArrayList<Student>arrayLists;
    public StudentList(){
        this.arrayLists = new ArrayList<Student>();
    }

    // Thêm sinh viên vào danh sách.
    public void themSinhVien(Student sv) {
        this.arrayLists.add(sv);
    }
    
    // In danh sách sinh viên ra màn hình.
    public void inDanhSachSinhVien() {
        for (Student arrayList : arrayLists) {
            System.out.println(arrayList);
        }
    }

    // Xóa một sinh viên ra khỏi danh sách dựa trên mã sinh viên.
    public boolean xoaSinhVien(Student sv) {
        return this.arrayLists.remove(sv);
    }

    public void timSinhVien(String ten) {
        for (Student sinhVien : arrayLists) {
            if(sinhVien.getTenSv().indexOf(ten)>=0) {
                System.out.println(sinhVien);
            }
        }
    }
}
