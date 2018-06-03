import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextLine()) {
            String s = sc.nextLine();

            int len = s.length();
            int count = 0;

            for(int i = 0; i < len - 1; i++) {
                char c = s.charAt(i);
                char n = s.charAt(i+1);
                if(Character.isLetter(c) && !Character.isLetter(n))
                        count++;

            }
            System.out.println(count);
        }
    }
}