
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    static int m, n;
    static final int maxv = 101;
    static Scanner cin = new Scanner(System.in);
    static BigInteger fact[] = new BigInteger[maxv];

    public static void main(String[] args) {
        factorial();
        for (m = cin.nextInt(), n = cin.nextInt();m != 0 && n != 0; m = cin.nextInt(), n = cin.nextInt()) {
            System.out.println(m + " things taken " + n + " at a time is "
                    + fact[m].divide(fact[m - n].multiply(fact[n])) + " exactly.");
        }
    }

    private static void factorial() {
        fact[0] = BigInteger.ONE;
        for (int i = 1; i < maxv; i++) {
            fact[i] = fact[i - 1].multiply(BigInteger.valueOf(i));
        }
    }
}
