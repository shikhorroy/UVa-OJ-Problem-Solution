
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);        
        int cnum = cin.nextInt();
        boolean flag = false;
        for(int cs = 1; cs <= cnum; cs++){
            BigInteger num = cin.nextBigInteger();           
            if(flag) System.out.println("");
            System.out.println(sqrt(num));
            flag = true;                    
        }
    }

    /*----------------------------------------------------------------------*
     *   Returns the Square Root of the Big Integer using Newton-Raphson    *
    /*----------------------------------------------------------------------*/    

    public static BigInteger sqrt(BigInteger A) {
        BigInteger temp = A.shiftRight(BigInteger.valueOf(A.bitLength()).shiftRight(1).intValue()), result = null;
        while (true) {
            result = temp.add(A.divide(temp)).shiftRight(1);
            if (!temp.equals(result)) {
                temp = result;
            } else {
                break;
            }
        }
        return result;
    }
}
