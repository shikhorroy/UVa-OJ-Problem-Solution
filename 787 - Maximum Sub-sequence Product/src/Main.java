
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String args[]) {
        Scanner cin = new Scanner(System.in);

        while (cin.hasNext()) {
            
            int index = 0, num;
            int store[] = new int[105];
            do {
                num = cin.nextInt();
                store[index++] = num;
            } while (num != -999999);
            int length = index - 1;
            BigInteger maxVal = BigInteger.valueOf(store[0]);
            for (int i = 0; i < length; i++) {
                BigInteger mult = BigInteger.ONE;
                for (int j = i; j < length; j++) {
                    mult = mult.multiply(BigInteger.valueOf(store[j]));
                    if (mult.compareTo(maxVal) == 1) {
                        maxVal = mult;
                    }
                }
            }
            System.out.println(maxVal);

        }

    }
}
