import java.math.*;
import java.util.*;
public class Main {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        BigInteger num1, num2;
        while(cin.hasNextBigInteger())
        {
            num1 = cin.nextBigInteger();
            String ch = cin.next();
            num2 = cin.nextBigInteger();
            if("/".equals(ch)) {
                System.out.println(num1.divide(num2));
            }
            else {
                System.out.println(num1.mod(num2));
            }
        }
    }
}
