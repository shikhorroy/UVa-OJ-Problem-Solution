
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner cin = new Scanner(System.in);
        String num1, num2, output = "";
        int cnum = cin.nextInt();        
        for(int cs = 1; cs <= cnum; cs++){
            num1 = cin.next(); num2 = cin.next();
            String revNum1 = rev_num(num1), revNum2 = rev_num(num2);            
            BigInteger n1 = new BigInteger(revNum1);
            BigInteger n2 = new BigInteger(revNum2);
            BigInteger ans = new BigInteger(rev_num(n1.add(n2).toString()));
            System.out.println(ans);
        }
    }
    static String rev_num(String num){
        String str = "";
        int l = num.length();
        for(int i = l - 1; i >= 0; i--){
            str += num.charAt(i);
        }
        return str;
    }
}
