
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        BigInteger fact[] = new BigInteger[1000], result = BigInteger.valueOf(1);
        for (int i = 0; i < 1000; i++) {
            result = result.multiply(BigInteger.valueOf(i + 1));
            fact[i] = result;
        }
        int num;
        while (cin.hasNextInt()) {
            num = cin.nextInt();
            System.out.println(num + "!\n" + fact[num - 1]);
        }
    }
}
