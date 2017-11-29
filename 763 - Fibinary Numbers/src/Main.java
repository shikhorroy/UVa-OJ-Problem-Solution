
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {

    static BigInteger FIB[] = new BigInteger[105];

    public static void main(String[] args) throws IOException {

        InputStreamReader instr = new InputStreamReader(System.in);
        BufferedReader read = new BufferedReader(instr);

        FIB[0] = BigInteger.ONE;
        FIB[1] = BigInteger.valueOf(2);
        for (int i = 2; i < 105; i++) {
            FIB[i] = FIB[i - 1].add(FIB[i - 2]);
        }

        String inStr = "";
        boolean flag = false;
        StringBuffer ans = new StringBuffer("");
        while ((inStr = read.readLine()) != null) {

            if (flag) {
                ans.append("\n");
            }
            flag = true;

            StringBuilder s = new StringBuilder(inStr);
            inStr = s.reverse().toString();
            BigInteger num1 = string_to_Bigint(inStr);   
            int l1 = inStr.length();

            inStr = read.readLine();
            s = new StringBuilder(inStr);
            inStr = s.reverse().toString();            
            BigInteger num2 = string_to_Bigint(inStr); 
            int l2 = inStr.length();

            BigInteger sum = num1.add(num2);
            
            if(sum.compareTo(BigInteger.ZERO) == 0){
                ans.append(0);
            }
            
            int arr[] = new int[105], i = 0, j = 0;            
            for(int k = 0; k < 105; k++) arr[k] = -1;
            
            int k = Math.max(l1, l2) + 1;
            while(sum.compareTo(BigInteger.ZERO) > 0){
                if(sum.compareTo(FIB[k]) >= 0){
                    sum = sum.subtract(FIB[k]);
                    arr[i++] = k;
                }
                k--;
            }
            for(i = arr[0]; i >= 0; i--){
                if(arr[j] != -1 && arr[j] == i){
                    ans.append('1'); j++;
                }
                else ans.append('0');
            }
            ans.append('\n');
            read.readLine();
        }
        System.out.print(ans);
    }   

    static BigInteger string_to_Bigint(String str) {

        int l = str.length();
        BigInteger ret = BigInteger.ZERO;

        for (int i = 0; i < l; i++) {

            if (str.charAt(i) == '1') {
                ret = ret.add(FIB[i]);
            }
        }

        return ret;
    }

}
