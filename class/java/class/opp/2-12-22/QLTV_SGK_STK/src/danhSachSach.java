import java.util.ArrayList;

public class danhSachSach {
    ArrayList<Sach> a = new ArrayList<>();

    public void themSach(Sach s) {
        a.add(s);
    }

    public Sach timTheoMaSach(String ma) {
        for (Sach s : a) {
            if (s.getMaSach().equalsIgnoreCase(ma.trim())) {
                return s;
            }
        }
        return null;
    }
    
}
