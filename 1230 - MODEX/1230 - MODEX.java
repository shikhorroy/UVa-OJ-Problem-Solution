
import java.math.*;
import java.util.*;

class Main { /* LA 4104 - MODEX */


    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int cnum = cin.nextInt();
        while (cnum-- > 0) {
            BigInteger x = BigInteger.valueOf(cin.nextInt());
            BigInteger y = BigInteger.valueOf(cin.nextInt());
            BigInteger n = BigInteger.valueOf(cin.nextInt());
            System.out.println(x.modPow(y, n)); // look ma, it’s in the library ;)
        }
    }
}
