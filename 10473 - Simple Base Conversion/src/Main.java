/*UVa 10473 - Simple Base Conversion*/

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (true) {
            String str = cin.next();           
            if (str.charAt(0) - '0' < 0) {
                break;
            }
            if (str.length() >= 2 && str.charAt(1) == 'x') {
                String tstr = str.substring(2);
                BigInteger num = new BigInteger(tstr, 16);
                System.out.println(num.toString(10));
            } else {
                BigInteger num = new BigInteger(str, 10);
                System.out.println("0x" + num.toString(16).toUpperCase());
            }
        }
    }
}
