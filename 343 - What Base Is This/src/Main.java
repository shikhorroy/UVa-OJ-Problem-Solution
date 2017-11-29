/*343 - What Base Is This?*/

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    static String n1, n2;
    private static BigInteger num1, num2;
    private static Scanner cin = new Scanner(System.in);

    public static void main(String[] args) {

        while (cin.hasNext()) {
            n1 = cin.next(); n2 = cin.next();
            boolean flag = true;
            for (int base1 = get_base(n1, 2); base1 < 37; ++base1) {
                boolean isBreak = false;
                num1 = new BigInteger(n1, base1);
                for (int base2 = get_base(n2, 2); base2 < 37; ++base2) {
                    num2 = new BigInteger(n2, base2);
                    if (num1.equals(num2)) {
                        System.out.println(n1 + " " + "(base " + base1 + ") = " + n2 + " (base " + base2 + ")");
                        flag = false;
                        isBreak = true;
                        break;
                    }
                }
                if (isBreak == true) {
                    break;
                }
            }
            if (flag == true) {
                System.out.println(n1 + " is not equal to " + n2 + " in any base 2..36");
            }
        }
    }
    
    private static int get_base(String n, int base) {
        for (base = 2; base < 37; ++base) {
            try {
                BigInteger num = new BigInteger(n, base);
                break;
            } catch (Exception e) {
                //do nothing.....
            }
        }
        return base;
    }
}
