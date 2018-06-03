import java.util.Scanner;

public class Main {

    public static void main(String atgs[]) {
        Scanner sc = new Scanner(System.in);
        int j = 0;

        while(true) {

            int n = sc.nextInt();
            if (n < 0)
                break;
            int c = 0;
            int i = 1;

            while (true) {
                if(n==1)
                    break;
                if (i * 2 >= n) {
                    c++;
                    break;
                }
                i = i * 2;
                c++;
            }
            System.out.println("Case " + ++j + ": " + c);
        }
    }
}