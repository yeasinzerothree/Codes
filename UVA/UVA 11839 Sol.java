import java.util.*;

public class Main{

    public static void main(String []args){

        Scanner sc = new Scanner(System.in);

        while(true) {
            int n = sc.nextInt();
            if(n == 0)
                break;
            for(int i = 1; i <= n; i++) {
                int[] opt = new int[5];
                int count = 0;
                int ans = 0;

                for(int j = 0; j < 5; j++) {
                    opt[j] = sc.nextInt();
                    if(opt[j]<=127) {
                        count++;
                        if(count==1)
                            ans = j;
                    }

                }
                if(count==1) {
                    ans = ans + 65;
                    char c = (char)ans;
                    System.out.println(c);
                }
                else
                    System.out.println("*");
            }
        }
    }
}
