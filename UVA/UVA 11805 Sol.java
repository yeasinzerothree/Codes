import java.util.Scanner;

/**
 * Created by yeasin on 12/15/16.
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        for (int t = sc.nextInt(), i = 1; i <= t; i++) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int p = sc.nextInt();
            int x;
            if( (k + p) % n ==0)
                x = n;
            else
                x = (k + p) % n;
            System.out.println("Case " + i + ": " + x);
        }
    }
}
