package studentmanager;
import java.util.Collections;
import java.util.ArrayList;
import java.io.*;
import java.util.Scanner;

public class StudentList {
    private ArrayList<Student> sList;
//-----------------------------------------------------
    public StudentList() {
        sList= new ArrayList();  
    }
//-----------------------------------------------------
    public StudentList(ArrayList<Student> sList) {
        this.sList = sList;
    }
//-----------------------------------------------------
    public ArrayList<Student> getsList() {
        return sList;
    }
//-----------------------------------------------------
    public void setsList(ArrayList<Student> sList) {
        this.sList = sList;
    }
//-----------------------------------------------------
    public void add(Student s){
        sList.add(s);
    }
//----------------------------------------------------- 
    public void delete(String id){
        for(Student t:sList)
            if(t.getId().equals(id)) {
                sList.remove(t); break;
            }
    }
//-----------------------------------------------------
    public void search(String name){
        for (Student t:sList)
            if(t.getName().equals(name)){
                System.out.println(t);
                                
            }
    }
//-----------------------------------------------------
    public void sorting(){
       Collections.sort(sList);
    }
//-----------------------------------------------------
    public void readfile(){
    Student buffer;
        try {
            Scanner inp = new Scanner(new File("student.txt"));
            while(inp.hasNext()){
                buffer=new Student();
                buffer.id = inp.next();       
                buffer.name = inp.next();       
                buffer.mark = inp.nextFloat(); 
                sList.add(buffer);
                
            }
            inp.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
//-----------------------------------------------------
    public void writefile(){
        try {
            PrintWriter out=new PrintWriter("report.txt");
            out.println("Student List\n--------------------\n");                   
            for(Student st:sList) 
                out.println(st);
            out.close();
        } catch (FileNotFoundException e){
            e.printStackTrace();
        }
    }
//-----------------------------------------------------
    @Override
    public String toString() {
        String s="Student List\n--------------------\n";        
        for(Student st:sList) s+=st+"\n";
        return s;
    }
//-----------------------------------------------------
}
