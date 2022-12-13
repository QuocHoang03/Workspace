public class main {
    public static void main(String[] agrs){
        String s = "    Pham Quoc Hoang    ";
        s =s.trim();
        int vt = s.lastIndexOf(" ");
        System.out.println(s.substring(vt+1));
    }
}
