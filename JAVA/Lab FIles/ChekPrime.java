import java.util.Scanner;

public class ChekPrime {
    public static void main(String[] args) {

        // int n = Integer.parseInt(args[0]);
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Any number: ");
        int n = sc.nextInt();
        int cnt = 0;
        for(int i=2; i<=n/2; i++) {
            if(n%i == 0) cnt++;
        }
        if(cnt >= 1) {
            System.out.println(n + " " + "is not a prime number");
        }
        else {
            System.out.println(n + " " + "is a prime number");
        }
        sc.close();
    }
}
