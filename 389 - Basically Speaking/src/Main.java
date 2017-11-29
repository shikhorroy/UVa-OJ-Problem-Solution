
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner cin = new Scanner(System.in);

        while (cin.hasNext()) {
            String string = cin.next();
            int base = cin.nextInt(), toBase = cin.nextInt();

            BigInteger num = new BigInteger(string, base);
            String ans = num.toString(toBase).toUpperCase();

            if (ans.length() > 7) {
                System.out.println("  ERROR");
            } else {
                for (int i = ans.length(); i < 7; i++) {
                    ans = " " + ans;                    
                }
                System.out.println(ans);
            }
        }
    }
}
