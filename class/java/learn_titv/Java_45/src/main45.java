public class main45 {
    public static void main(String[] args) {
        HangSanXuat h1 = new HangSanXuat("Hang 1", "Viet Nam1");
        HangSanXuat h2 = new HangSanXuat("Hang 2", "Viet Nam2");
        HangSanXuat h3 = new HangSanXuat("Hang 3", "Viet Nam3");

        MayBay p1 = new MayBay(h1, "Xang 1");
        PhuongTienDiChuyen p2 = new XeOto(h2,"Xang 2");
        PhuongTienDiChuyen p3 = new XeDap(h3);

        System.out.println("Lay hang san xuat: ");
        System.out.println("p1: "+p1.layTenHangSanXuat());

        System.out.println("Bat dau: ");
        p2.batDau();

        System.out.println("Lay van toc: ");
        System.out.println("p1: "+p1.layVanToc());
        System.out.println("p2: "+p2.layVanToc());
        System.out.println("p3: "+p3.layVanToc());

        System.out.println("Cat canh: ");
        p1.catCanh();
    }
}
