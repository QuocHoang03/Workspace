import java.util.Scanner;

public class demo6 {
    // ham ve tam giac vuong nguoc phai
    private static void tgiac(int n) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (j < i) {
                    System.out.print("~");
                } else {
                    System.out.print("*");
                }
            }
            System.out.print("\n");
        }
    }

    public static void main(String[] agrs) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Input Number: ");
        int n = scanner.nextInt();
        tgiac(n);
    }
}
