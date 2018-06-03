import java.util.Scanner;

/**
 * Created by yeasin on 10/16/16.
 */
public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        sc.nextLine();

        for(int i = 1; i <= t; i++) {
            String s = sc.nextLine();
            int n = s.length();

            if(s.equals("1") || s.equals("4") || s.equals("78"))
                System.out.println("+");
            else if(s.charAt(n-1)=='5' && s.charAt(n-2)=='3')
                System.out.println("-");
            else if(s.charAt(0)=='9' && s.charAt(n-1)=='4')
                System.out.println("*");
            else
                System.out.println("?");
        }
    }
}
