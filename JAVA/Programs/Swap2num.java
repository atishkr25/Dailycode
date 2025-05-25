import java.util.Scanner;

public class Swap2num {
    public static void main(String[] args) {
        System.out.println();
        System.out.println("Atish ");


            Scanner scanner = new Scanner(System.in);
            System.out.println("Enter first number: ");
            int a = scanner.nextInt();
            System.out.println("Enter second number: ");    
            int b = scanner.nextInt();
            

            int temp = a;
            a = b;
            b = temp;

            System.out.println("a = " + a + ", b = " + b);
        
    }
}
