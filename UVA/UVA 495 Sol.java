import java.math.BigInteger;
import java.util.*;
 
 
public class Main {
 
    private static BigInteger fib(int n) {
        if(n == 0)
	return BigInteger.valueOf(0);
        BigInteger a = BigInteger.valueOf(0);
        BigInteger b = BigInteger.valueOf(1);
        BigInteger c = BigInteger.valueOf(1);
 
        for (int i = 2; i <= n; i++) {
            c = a.add(b);
            a = b;
            b = c;
        }
 
        return c;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int n;
	while(sc.hasNextInt()) {
		n = sc.nextInt();
 
		 System.out.println("The Fibonacci number for " + n + " is " + fib(n));
	}
 
 
    }
}