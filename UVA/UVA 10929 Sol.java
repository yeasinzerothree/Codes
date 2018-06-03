import java.util.Objects;
import java.util.Scanner;

/**
 * Created by yeasin on 12/10/16.
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextLine()) {
            String s = sc.nextLine();
            if(Objects.equals(s, "0")) {
                break;
            }
            int sum = 0;
            for(int i = 0, j; i < s.length(); i++) {
                if(i % 2 == 0)
                    j = -1;
                else
                    j = 1;
                sum += j * ((int)s.charAt(i) -'0');
            }

            if(sum % 11 == 0)
                System.out.println(s + " is a multiple of 11.");
            else
                System.out.println(s + " is not a multiple of 11.");
        }
    }
}

