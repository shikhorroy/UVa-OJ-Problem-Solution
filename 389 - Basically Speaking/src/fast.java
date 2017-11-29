
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class fast {

    public static void main(String[] args) throws IOException {
        
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringBuffer sb = new StringBuffer("");
        
        String m = "";
        while ((m = br.readLine()) != null) {
            
            StringTokenizer st = new StringTokenizer(m);
            String[] str = new String[st.countTokens()];
            for (int i = 0; i < str.length; i++) {
                str[i] = st.nextToken();
            }
            
            int baseFrom = Integer.parseInt(str[1]);
            int baseTo = Integer.parseInt(str[2]);
            int temp = Integer.parseInt(str[0], baseFrom);
            
            StringBuilder result = new StringBuilder(Integer.toString(temp, baseTo));
            
            for (int i = result.length(); i < 7; i++) {
                result.insert(0, ' ');
            }
            if (result.length() == 7) {
                sb.append(result.toString().toUpperCase()).append("\n");
            } else {
                sb.append("  ERROR\n");
            }
        }
        System.out.print(sb);
    }
}
