
import java.math.*;
import java.util.*;

class Main { /* UVa 10551 - Basic Remains */

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (true) {
            int b = cin.nextInt();
            if (b == 0) {
                break;
            }
            String p_str = cin.next();
            BigInteger p = new BigInteger(p_str, b); // special constructor!
            String m_str = cin.next();
            BigInteger m = new BigInteger(m_str, b); // 2nd parameter is the radix/base
            System.out.println((p.mod(m)).toString(b)); // can output in any radix/base
        }
    }
}
