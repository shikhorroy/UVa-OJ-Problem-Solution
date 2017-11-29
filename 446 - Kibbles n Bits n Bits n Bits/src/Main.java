/*446 - Kibbles n Bits n Bits n Bits*/

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    static int cnum;
    static String operator;
    static BigInteger num1, num2, res;
    static Scanner cin = new Scanner(System.in);

    public static void main(String[] args) {
        cnum = cin.nextInt();
        while (cnum-- > 0) {
            num1 = cin.nextBigInteger(16);
            operator = cin.next();
            num2 = cin.nextBigInteger(16);
            if ("+".equals(operator)) {
                res = num1.add(num2);
            } else {
                res = num1.subtract(num2);
            }
            String str1 = num1.toString(2), str2 = num2.toString(2);
            System.out.println(
                    print_zeros(13 - str1.length()) + str1 + " " + operator + " "
                    + print_zeros(13 - str2.length()) + str2 + " = " + res);
        }
    }

    private static String print_zeros(int l) {
        String zeros = "";
        for (int i = 0; i < l; i++) {
            zeros += '0';
        }
        return zeros;
    }
}
