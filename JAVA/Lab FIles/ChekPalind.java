//By using command line chek a number is palindrome or not ?

public class ChekPalind {
    public static void main(String[] args) {
        
        if(args.length < 1) {
            System.out.println("Please provide a balid number: ");
            return;
        }
        else {
            int n = Integer.parseInt(args[0]);
            int real  = n;
            int rev = 0;
            while(n > 0) {
                rev = rev*10+(n%10);
                n /= 10;
            }
            
            if(real == rev){
                System.out.println(real + " " + "is a palindrome number");
            }
            else {
                System.out.println(real + " " + "is not a palindrome number");
            }
        }
    }
}
