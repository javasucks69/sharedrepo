import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

class demo{
	public static void main(String args[])throws Exception{
		// BigInteger a = new BigInteger("0");
		// BigInteger b= new BigInteger("0");
		Scanner sc = new Scanner(new FileInputStream("in.txt"));
		// int at = sc.nextInt();
		// a = BigInteger.valueOf(at);
		// a = a.multiply(a);
		// System.out.println(a.intValue());
		int t;
		t = sc.nextInt();
		while(t > 0){
			long n,k;
			n = sc.nextLong();
			k = sc.nextLong();
			BigInteger k2 = new BigInteger(Long.toString(k));
			BigInteger N = new BigInteger(Long.toString(n)); 
			k2 = k2.multiply(k2);
			if( N.remainder(k2).intValue() == 0){
				System.out.println("NO");
			}
			else{
				System.out.println("YES");
			}
			t--;
		}
	}
}