
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        BigInteger FIB[] = new BigInteger[5001];
        FIB[0] = BigInteger.valueOf(0);
        FIB[1] = BigInteger.valueOf(1);
        for (int i = 2; i < 5001; i++) {
            FIB[i] = FIB[i - 1].add(FIB[i - 2]);
        }
        Scanner cin = new Scanner(System.in);
        while (cin.hasNextInt()) {
            int num = cin.nextInt();
            System.out.println("The Fibonacci number for " + num + " is " + FIB[num]);
        }
    }
}
