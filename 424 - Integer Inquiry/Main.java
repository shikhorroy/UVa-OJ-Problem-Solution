import java.math.BigInteger;
import java.util.Scanner;
public class Main {	
	public static void main(String[] args){
		Scanner cin = new Scanner(System.in);
		BigInteger num, sum;
		sum = BigInteger.valueOf(0);		
		while(true){				
			num = cin.nextBigInteger();	
			if(num.equals(BigInteger.valueOf(0)))
				break;
			sum = sum.add(num);
		}
		System.out.println(sum);
	}	
}
