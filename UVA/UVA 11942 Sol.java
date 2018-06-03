import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        System.out.println("Lumberjacks:");

        for(int i = 1; i <= t; i++) {
            int[] number = new int[10];

            for(int j = 0; j < 10; j++)
                number[j] = sc.nextInt();
            int flag = 0;
            int num = number[1];
            if(number[1] > number[0])
                flag = 1;
            for(int k = 2; k < 10; k++) {
                if(flag == 0) {
                    if(number[k] < num)
                        num = number[k];
                    else {
                        System.out.println("Unordered");
                        flag = 2;
                        break;
                    }
                }
                else {
                    if(number[k] > num)
                        num = number[k];
                    else {
                        System.out.println("Unordered");
                        flag = 2;
                        break;
                    }
                }
            }
            if(flag != 2)
                System.out.println("Ordered");
        }
    }
}