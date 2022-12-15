import java.util.Scanner;

public class runStudent{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		StudentList dssv = new StudentList();
		int luaChon = 0;
		do {
			System.out.println("---------- MENU ----------");
			System.out.println("Vui long lua chon chuc nang:");

			System.out.print("1. Thêm sinh viên vào danh sách.\n"
			+"2. Tim sinh vien theo ten.\n"
			+"3. Xoa sinh vien theo ma sinh vien.\n"
			+"4. In sinh vien cung khoa hoc.\n"
			+"5. In danh sách sinh viên ra màn hình.\n"
			+"0. Thoat khoi chuong trinh.\n"
			+"Chon: "
			);
			luaChon = sc.nextInt();
			sc.nextLine();
			switch(luaChon){
				case 1:
					System.out.print("Nhap ma sinh vien: ");
						String maSinhVien = sc.nextLine();
					System.out.print("Nhap ten sinh vien: ");
						String tenSinhVien = sc.nextLine();
					System.out.print("Nhap khoa hoc: ");
						String khoaHoc = sc.nextLine();
					System.out.print("Nhap diem: ");
						Float diem = sc.nextFloat();
					Student svNew = new Student(maSinhVien, tenSinhVien, khoaHoc, diem);
					dssv.themSinhVien(svNew);;
					break;
				case 2:
					System.out.print("Nhap ten sinh vien: ");
						String newTen = sc.nextLine();
					System.out.println("Danh sach sinh vien theo ten: ");
						dssv.timSinhVienTheoTen(newTen);
					break;
				case 3:
					System.out.print("Nhap ma sinh vien: ");
						String newMaSv = sc.nextLine();
					Student sv = new Student(newMaSv);
					System.out.println("Xoa sinh vien trong danh sach: "+dssv.xoaSinhVienTheoMa(sv));
					break;
				case 4:
					System.out.print("Nhap ten khoa hoc: ");
					String newKhoaHoc = sc.nextLine();
					System.out.println("Danh sach sinh vien: ");
					dssv.inSinhVienCungKhoaHoc(newKhoaHoc);
					break;
				case 5:
					System.out.println("Danh sach sinh vien: ");
					dssv.xuatSinhVien();
					break;
			}
			System.out.println();
		} while (luaChon != 0);
		sc.close();
	}
}import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;

public class runPerson {
    private ArrayList<Employee>employee;
    private ArrayList<Student>student;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap 1 de nhap Employee hoac Nhap 2 de nhap Studen");
        int n = sc.nextInt();
        switch(n){
            case 1:
                System.out.println("Nhap name: ");
                    String name = sc.nextLine();
                System.out.println("Nhap age: ");
                    String age = sc.nextLine();
                System.out.println("Nhap hireDay: ");
                    String hireDay = sc.nextLine();
                System.out.println("Nhap salary: ");
                    String salary = sc.nextLine();
                Employee employee = new 

                break;
        }

        
    }
}
