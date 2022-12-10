package studentmanager;

import java.util.Scanner;

public class StudentManager extends Menu{
    
    private StudentList studentList= new StudentList();
    
    static String[] menu={"Add new student","Delete student","Find student by name ","Sorting Students List","Report","Exit"};
//--------------------------------------------------
    public StudentManager() {
        super(menu,"Student Management");

        studentList.readfile();
        
    }
//--------------------------------------------------    
    @Override
    public void execute(int n) {
        switch(n){
            case 1: addStudent();break;
            case 2: deleteStudent();break;            
            case 3: searchStudent();break;
            case 4: sortList();  break;
            case 5: report();break;
            case 6: System.exit(0);
        }
    }
//--------------------------------------------------
    public static String getSrtingData(String prompt){
        Scanner sc = new Scanner(System.in);
        System.out.print(prompt+" : "); 
        return sc.nextLine();
    }
    public static float getFloatData(String prompt){
        Scanner sc = new Scanner(System.in);
        System.out.print(prompt+" : "); 
        return sc.nextFloat();        
    }
//--------------------------------------------------
    public void addStudent(){
        System.out.println("Enter new student: ");
        String id=getSrtingData("Student ID");
        String sn=getSrtingData("name: ");
        float sm=getFloatData("mark:");        
        Student s= new Student(id,sn,sm);
        studentList.add(s);
    }
//--------------------------------------------------
    public void deleteStudent(){        
        String id=getSrtingData("Student course ID");
        studentList.delete(id);
    }
//--------------------------------------------------
    public void searchStudent(){        
        String sn=getSrtingData("Student name");
        studentList.search(sn);
    }
//--------------------------------------------------
    public void sortList(){
       
        studentList.sorting();
        studentList.writefile();
    }
//--------------------------------------------------
    public void report(){
        
        System.out.println(studentList);
    }
//--------------------------------------------------
    public static void main(String[] args) {
        StudentManager sm= new StudentManager(); 
        sm.run();
    }
    
}
