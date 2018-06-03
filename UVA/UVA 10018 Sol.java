import java.util.Scanner;

public class Main
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for(int i= 0; i < t; i++) {
            long p = sc.nextLong();
            int count = 0;

            while (true) {
                if(checkPalindrome(p)== true)
                    break;
                p = p + reverseNumber(p);
                count++;
            }
            System.out.println(count + " " + p);
        }
    }
    public static boolean checkPalindrome(long p) {
        return p == reverseNumber(p);
    }
    public static long reverseNumber(long n) {
        long reversed_number = 0;
        int remainder;
        while (n>0) {
            remainder = (int) (n % 10);
            reversed_number = reversed_number * 10 + remainder;
            n/=10;
        }
        return reversed_number;
    }
}