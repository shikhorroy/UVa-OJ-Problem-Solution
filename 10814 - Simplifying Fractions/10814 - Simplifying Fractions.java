
import java.math.*;
import java.util.*;

class Main { /* UVa 10814 - Simplifying Fractions */

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int N = cin.nextInt();
        while (N-- > 0) {
            BigInteger p = cin.nextBigInteger();
            String ch = cin.next(); // ignore this one
            BigInteger q = cin.nextBigInteger();
            BigInteger gcd_pq = p.gcd(q); // wow :)
            System.out.println(p.divide(gcd_pq) + " / " + q.divide(gcd_pq));
        }
    }
}
