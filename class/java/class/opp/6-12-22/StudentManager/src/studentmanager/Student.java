package studentmanager;

import java.util.Objects;
import java.util.Collections;
public class Student implements /*java.io.Serializable*/Comparable<Student> {
    public String id;
    public String name;
    public float  mark;    
    public Student (){
    }
    public Student(String id, String name, float mark){
        this.id = id;
        this.name = name;        
        this.mark = mark;   
    }
    public void setStudent(Student s){
        //if(this.equals(s)) 
        
            name=s.name;
            mark=s.mark;
        
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
    public float getMark() {
        return mark;
    }
    public void setMark(float mark) {
        this.mark = mark;
    }
    @Override
    public String toString(){
         return id + "  " + name + "  " + mark ;
        // return id + " " + name + " " + String.valueOf(mark); 
     }  
    
    @Override
    public int compareTo(Student s) {
        if (this.mark == s.mark){
        return this.name.compareTo(s.name);
        }else{
            if (this.mark > s.mark) return 1;
            else return -1;
        }
    }
   
}
