public class MainSinhVien {
    public static void main(String[] args) {
        Ngay37 ngay1 = new Ngay37(22, 06, 2003);
        Ngay37 ngay2 = new Ngay37(22, 07, 2004);
        Ngay37 ngay3 = new Ngay37(22, 06, 2003);

        Lop lop1 = new Lop("DH01", "Khoa cntt1");
        Lop lop2 = new Lop("DH02", "Khoa cntt2");
        Lop lop3 = new Lop("DH03", "Khoa cntt3");

        SinhVien sv1 = new SinhVien("0001", "PhamQuocHoang1", ngay1, 9.0, lop1);
        SinhVien sv2 = new SinhVien("0002", "PhamQuocHoang2", ngay2, 6.0, lop2);
        SinhVien sv3 = new SinhVien("0003", "PhamQuocHoang3", ngay3, 4.0, lop3);

        System.out.println("Ten Khoa: ");
        System.out.println("SV1: " + sv1.layTenKhoa());
        System.out.println("SV2: " + sv2.layTenKhoa());
        System.out.println("SV3: " + sv3.layTenKhoa());

        System.out.println("Kiem tra thi dat: ");
        System.out.println("SV1: " + sv1.kiemTraThiDat());
        System.out.println("SV2: " + sv2.kiemTraThiDat());
        System.out.println("SV3: " + sv3.kiemTraThiDat());

        System.out.println("Kiem tra cung ngay sinh: ");
        System.out.println("SV1 va SV2: "+sv1.kiemTraCungNgaySinh(sv2));
        System.out.println("SV1 va SV3: "+sv1.kiemTraCungNgaySinh(sv3));
    }
}
