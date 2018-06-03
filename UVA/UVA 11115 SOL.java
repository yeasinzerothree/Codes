import java.math.BigInteger;
import java.util.*;


public class Main {

    private static BigInteger fib(int n) {
        BigInteger a = BigInteger.valueOf(0);
        BigInteger b = BigInteger.valueOf(1);
        BigInteger c;

        for (int i = 2; i <= n; i++) {
            c = a.add(b);
            a = b;
            b = c;
        }

        return a;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;

            n = sc.nextInt();

            System.out.println(fib(n));

    }
}
