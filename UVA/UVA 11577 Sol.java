import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i++ < t; ) {
            String s = sc.nextLine();
            s = s.toLowerCase();

            int[] letters = new int[26];

            for (int j = 0; j < 26; j++)
                letters[j] = 0;

            for (int j = 0; j < s.length(); j++) {
                int c = s.charAt(j) - 'a';
                if (c >= 0 && c <= 25)
                    letters[c]++;
            }
            int max = 0;
            for(int x : letters) {
                if(x>max)
                    max = x;
            }

            for(int j = 0; j < 26; j++) {
                if(letters[j] == max)
                    System.out.print((char)(97 + j));
            }
            System.out.println();
        }

    }

}