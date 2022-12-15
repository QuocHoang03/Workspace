public class Student extends Person{
    private String major;       // Nghành
    private float mark;         // Điểm
    public Student(String name, int age, String major, float mark) {
        super(name, age);
        this.major = major;
        this.mark = mark;
    }
    public String getMajor() {
        return major;
    }
    public void setMajor(String major) {
        this.major = major;
    }
    public float getMark() {
        return mark;
    }
    public void setMark(float mark) {
        this.mark = mark;
    }
    @Override
    public void printInfo() {
        System.out.println("Student ["+"Name= "+name+"Age= "+age+"Major=" + major + ", Mark=" + mark + "]");
    }
}
