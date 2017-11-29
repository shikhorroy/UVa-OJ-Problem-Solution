
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
   
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        BigInteger num1, num2;
        while(cin.hasNextBigInteger())
        {
            num1 = cin.nextBigInteger();
            num2 = cin.nextBigInteger();
            System.out.println(num1.multiply(num2));
        }
    }
}
