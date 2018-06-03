import java.util.Scanner;

/**
 * Created by Yeasin Mollik on 11/15/2016.
 */
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextLine()) {
            String s = sc.nextLine();

            int[] c = new int[52];

            char[] d = s.toCharArray();

            for (int i = 0; i < d.length; i++) {
                if (d[i] >= 'A' && d[i] <= 'Z')
                    c[(int) d[i] - 65]++;
                else if (d[i] >= 'a' && d[i] <= 'z')
                    c[(int) d[i] - 97 + 26]++;
            }
            int max = 0;
            for(int x : c) {
                if(max < x)
                    max = x;
            }

            for(int i = 0; i < c.length; i++) {
                if(c[i] == max) {
                    if(i >=0 && i <= 25)
                        System.out.print((char)(i+65));
                    else
                        System.out.print((char)(i+97-26));
                }
            }
            System.out.println(" " + max);
        }
    }
}

