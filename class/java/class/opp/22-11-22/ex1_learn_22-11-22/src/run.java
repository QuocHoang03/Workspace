public class run {
    public static void main(String[] args) throws Exception {
        sp_list sp = new sp_list();
        sp.nhap();
        sp.xuat();
        System.out.print("\nDoanh thu: " + sp.doanh_thu());
        System.out.print("\nDoanh thu max: " + sp.doanh_thu_max());
    }
}