public class Employee extends Person{
    private int hireDay;        // Ngày thuê
    private float salary;
    public Employee(String name, int age, int hireDay, float salary) {
        super(name, age);
        this.hireDay = hireDay;
        this.salary = salary;
    }
    
    public int getHireDay() {
        return hireDay;
    }

    public void setHireDay(int hireDay) {
        this.hireDay = hireDay;
    }

    public float getSalary() {
        return salary;
    }

    public void setSalary(float salary) {
        this.salary = salary;
    }

    @Override
    public void printInfo() {
        System.out.println("Employee ["+"Name= "+name+"Age= "+age+"HireDay=" + hireDay + ", Salary=" + salary + "]");
    }
}
