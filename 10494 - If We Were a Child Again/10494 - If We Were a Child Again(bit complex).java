
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws java.io.IOException {
        String str;        
        Scanner cin = new Scanner(System.in);

        while (cin.hasNextLine()) {
            str = cin.nextLine();
            int l = str.length(), i;
            String part1 = "", part2 = "";
            
            for(i = 0;; i++)
            {
                if(str.charAt(i) != ' ')
                {
                    part1 += str.charAt(i);
                }
                else{
                    break;
                }
            }
            char ch;
            BigInteger num1 = new BigInteger(part1);
            for(;; i++)
            {
                if(str.charAt(i) == '/' || str.charAt(i) == '%')
                {
                    ch = str.charAt(i);
                    break;
                }
            }
            for(i = i + 1; i < l; i++)
            {
                if(str.charAt(i) != ' ')
                {
                    part2 += str.charAt(i);
                }
            }
            BigInteger num2 = new BigInteger(part2), res;            
            if (ch == '/') {
                res = num1.divide(num2);
            } else {
                res = num1.mod(num2);
            }
            System.out.println(res);            
        }
    }
}
