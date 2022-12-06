public class main46 {
    public static void main(String[] args) {
        System.out.println("Test cau a: ");
        MayTinhCasioFX500 mfx500 = new MayTinhCasioFX500();
        MayTinhVinaCal500 mvn500 = new MayTinhVinaCal500();

        System.out.println("MFX 500");
        System.out.println("5+5 = " + mfx500.cong(5, 5));
        System.out.println("5-5 = " + mfx500.tru(5, 5));
        System.out.println("5*5 = " + mfx500.nhan(5, 5));
        System.out.println("5/5 = " + mfx500.chia(5, 5));

        System.out.println("MVN 500");
        System.out.println("5+5 = " + mvn500.cong(5, 5));
        System.out.println("5-5 = " + mvn500.tru(5, 5));
        System.out.println("5*5 = " + mvn500.nhan(5, 5));
        System.out.println("5/5 = " + mvn500.chia(5, 5));

        System.out.println("Test cau b: ");
        double[] arr1 = new double[] { 2, 1, 4, 2, 5, 6, 2, 6 };
        double[] arr2 = new double[] { 4, 6, 2, 7, 2, 7, 1, 4 };
        SapXepChen sxchen = new SapXepChen();
        SapXepChon sxchon = new SapXepChon();

        sxchen.sapXepTang(arr1);
        for (int i = 0; i < arr1.length; ++i) {
            System.out.print(arr1[i] + " ");
        }
        System.out.println();
        sxchon.sapXepGiam(arr2);
        for (int i = 0; i < arr2.length; ++i) {
            System.out.print(arr2[i] + " ");
        }

        System.out.println("Test cau c: ");
        PhanMemMayTinh pmmt = new PhanMemMayTinh();
        System.out.println("3+5 = " + pmmt.cong(3, 5));
        double[] arr3 = new double[] { 4, 6, 2, 4, 7, 1, 5, 6 };
        pmmt.sapXepTang(arr3);
        for (int i = 0; i < arr3.length; ++i) {
            System.out.print(arr3[i] + " ");
        }
    }
}
