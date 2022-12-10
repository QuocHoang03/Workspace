import java.util.ArrayList;
import java.util.Collection;

class Student implements Comparable<Student> {
    private int MSV;
    private String ten;
    private int namSinh;
    private String khoa;

    public Student(int mSV, String ten, int namSinh, String khoa) {
        this.MSV = mSV;
        this.ten = ten;
        this.namSinh = namSinh;
        this.khoa = khoa;
    }

    @Override
    public String toString() {
        return MSV + " - " + ten + " - " + namSinh + " - " + khoa;
    }

    @Override
    public int compareTo(Student o) {
        if(this.khoa.compareTo(o.khoa)==0){
            return this.ten.compareTo(o.ten);
        }else{
            return this.khoa.compareTo(o.khoa);
        }   
    }
}
