/*355 - The Bases Are Loaded*/
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    private static String str;
    private  static int b1 = 0, b2;
    
    public static void main(String[] args){
        Scanner cin = new Scanner(System.in);
        while (cin.hasNext()) {
            try {
                b1 = cin.nextInt();
                b2 = cin.nextInt();
                str = cin.next();
                BigInteger num = new BigInteger(str, b1);
                System.out.println(str + " base " + b1 + " = " + num.toString(b2).toUpperCase() + " base " + b2);
            }
            catch(NumberFormatException var){
                System.out.println(str + " is an illegal base " + b1 + " number");
            }
        }
    }
}
