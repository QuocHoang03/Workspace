public class Student implements Comparable<Student>{
    public String id;
    public String name;
    public String  course;
    private float marks;

    public Student(String id, String name, String course, float marks) {
        this.id = id;
        this.name = name;
        this.course = course;
        this.marks = marks;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getCourse() {
        return course;
    }

    public void setCourse(String course) {
        this.course = course;
    }

    public float getMarks() {
        return marks;
    }

    public void setMarks(float marks) {
        this.marks = marks;
    }

    @Override
    public String toString() {
        return "Student [id=" + id + ", name=" + name + ", course=" + course + ", marks=" + marks + "]";
    }

    @Override
    public int compareTo(Student s) {
        if (this.marks == s.marks) {
            return this.name.compareTo(s.name);
        } else {
            if (this.marks > s.marks)
                return 1;
            else
                return -1;
        }
    }

    
}
