public class runPerson {
    public static void main(String[] args) {
        Employee emp = new Employee("Pham Quoc Hoang1", 19,1,2000000);
        Student sv = new Student("Pham Quoc Hoang2", 18, "CNTT", 9.9f);
        emp.printInfo();
        sv.printInfo();
    }
}
