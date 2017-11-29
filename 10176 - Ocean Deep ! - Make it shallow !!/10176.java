/*10176 - Ocean Deep ! - Make it shallow !!*/

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    static int l;
    static String str;
    private static Scanner cin = new Scanner(System.in);

    public static void main(String[] args) {

        while (cin.hasNext()) {
            String tstr = "";
            while (true) {
                str = cin.next();
                if (str.charAt((l = str.length()) - 1) == '#') {
                    break;
                }
                tstr += str;
            }
            tstr += str.substring(0, l - 1);
            BigInteger num = new BigInteger("131071"), bin = new BigInteger(tstr, 2);
            if (bin.mod(num).equals(BigInteger.ZERO)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
