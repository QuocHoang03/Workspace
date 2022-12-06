public class MainBoPhim {
    public static void main(String[] args) {
        Ngay36 ngay1 = new Ngay36(22, 06, 2003);
        Ngay36 ngay2 = new Ngay36(23, 07, 2004);
        Ngay36 ngay3 = new Ngay36(22, 06, 2003);

        HangSanXuat hangSanXuat1 = new HangSanXuat("Hang A", "VietNam1");
        HangSanXuat hangSanXuat2 = new HangSanXuat("Hang B", "VietNam2");
        HangSanXuat hangSanXuat3 = new HangSanXuat("Hang C", "VietNam3");

        BoPhim boPhim1 = new BoPhim("BoGia1", 2020, hangSanXuat1, 50000, ngay1);
        BoPhim boPhim2 = new BoPhim("BoGia2", 2020, hangSanXuat2, 60000, ngay2);
        BoPhim boPhim3 = new BoPhim("BoGia3", 2020, hangSanXuat3, 40000, ngay3);

        System.out.println("SS gia 1 re hon 2 : " + boPhim1.kiemTraGiaaVeReHon(boPhim2));
        System.out.println("SS gia 1 re hon 3 : " + boPhim1.kiemTraGiaaVeReHon(boPhim3));

        System.out.println("Ten hang san xuat bo phim 1 : " + boPhim1.layTenHangSanXuatPhim());

        System.out.println("Bo phim 1 giam 10% : " + boPhim1.giaSauKhuyenMai(10));
        System.out.println("Bo phim 1 giam 10% : " + boPhim1.giaSauKhuyenMai(50));
    }
}
