
import java.math.BigInteger;
import java.util.Scanner;


public class Main {

    static BigInteger fibs[] = new BigInteger[1001];
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);        
        fibs_generator();
        int n;
        while(cin.hasNextInt())
        {
            n = cin.nextInt();
            System.out.println(fibs[n]);
        }
    }

    private static void fibs_generator() {
        fibs[0] = BigInteger.valueOf(1);
        fibs[1] = BigInteger.valueOf(2);
        for(int i = 2; i <= 1000; i++)
        {
            fibs[i] = fibs[i - 1].add(fibs[i - 2]);
        }
    }
}
