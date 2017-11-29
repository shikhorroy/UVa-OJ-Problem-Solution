
import java.math.*; // BigInteger class is inside this package
import java.util.*;
class Main { /* UVa 10925 - Krakovia */

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int cs = 1;
        while (true) {
            int N = cin.nextInt(), F = cin.nextInt(); // N bills, F friends
            if (N == 0 && F == 0) {
                break;
            }
            BigInteger sum = BigInteger.valueOf(0); // use valueOf to initialize
            for (int i = 0; i < N; i++) { // sum the N large bills
                BigInteger V = cin.nextBigInteger(); // for reading next BigInteger!
                sum = sum.add(V); // this is BigInteger addition
            }
            System.out.println("Bill #" + (cs++) + " costs "
                    + sum + ": each friend should pay " + sum.divide(BigInteger.valueOf(F)));
            System.out.println(); // the line above is BigInteger division
        }
    }
} // divide the large sum to F friends
