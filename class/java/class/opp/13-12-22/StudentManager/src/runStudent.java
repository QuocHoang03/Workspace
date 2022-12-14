import java.util.Scanner;

public class runStudent {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		StudentList dssv = new StudentList();
		int luaChon = 0;
		do {
			System.out.println("MENU ---------- ");
			System.out.println("Vui long chon chuc nang: ");
			System.out.println(
					"1. Them sinh vien vao danh sach.\n"
							+ "2. In danh sach sinh vien ra man hinh.\n"
							+ "3. Tim kiem tat ca sinh vien dua tren Ten duoc nhap tu ban phim.\n"
							+ "4. Xoa mot sinh vien ra khoi danh sach dua tren ma sinh vien.\n");
			luaChon = sc.nextInt();
			sc.nextLine();

			if (luaChon == 1) {
				// 1. Thêm sinh viên vào danh sách.
				System.out.print("Nhap ma sinh vien: ");
				String maSinhVien = sc.nextLine();
				System.out.print("Nhap ho va ten: ");
				String hoVaTen = sc.nextLine();
				System.out.print("Nhap khoa hoc: ");
				String khoaHoc = sc.nextLine();
				System.out.print("Nhap diem : ");
				float diem = sc.nextFloat();
				Student sv = new Student(maSinhVien, hoVaTen, khoaHoc, diem);
				dssv.themSinhVien(sv);
			} else if (luaChon == 2) {
				// 2. In danh sách sinh viên ra màn hình.
				dssv.inDanhSachSinhVien();

			} else if (luaChon == 3) {
				// 3. Tìm kiếm tất cả sinh viên dựa trên Tên được nhập từ bàn phím.
				System.out.println("Nhap ho va ten: ");
				String hoVaTen = sc.nextLine();
				System.out.println("Ket qua tim kiem: ");
				dssv.timSinhVien(hoVaTen);
			} else if (luaChon == 4) {
				// 4. Xóa một sinh viên ra khỏi danh sách dựa trên mã sinh viên.
				System.out.print("Nhap ma sinh vien: ");
				String maSv = sc.nextLine();
				Student sv = new Student(maSv);
				System.out.println("Xoa sinh vien trong danh sach: " + dssv.xoaSinhVien(sv));
			}
		} while (luaChon != 0);
		sc.close();
	}
}