import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;

public class SortingInArrayListDemo {
    public static void main(String[] args) {
        ArrayList<Student> arrayList = new ArrayList<Student>();
        arrayList.add(new Student(1, "Hoang", 1111, "Cong nghe thong tin 1"));
        arrayList.add(new Student(2, "Hoang", 2222, "Cong nghe thong tin 2"));
        arrayList.add(new Student(3, "Hoang", 3333, "Cong nghe thong tin 3"));
        arrayList.add(new Student(4, "Hoang", 4444, "Cong nghe thong tin 4"));
        arrayList.add(new Student(5, "Hoang", 5555, "Cong nghe thong tin 5"));
        arrayList.add(new Student(6, "Hoang", 6666, "Cong nghe thong tin 6"));
        arrayList.add(new Student(7, "Hoang", 7777, "Cong nghe thong tin 7"));
        arrayList.add(new Student(8, "Hoang", 8888, "Cong nghe thong tin 8"));
        arrayList.add(new Student(9, "Hoang", 9999, "Cong nghe thong tin 9"));

        System.out.println("Truoc khi sap xep");
        for (Student item : arrayList) {
            System.out.println(item);
        }
        Collections.sort(arrayList);
        System.out.println("Sau khi sap xep");
        for (Student item : arrayList) {
            System.out.println(item);
        }
    }
}
