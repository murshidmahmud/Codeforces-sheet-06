import java.util.*;

public class GCD{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        long A = input.nextLong();
        long B = input.nextLong();

        long x = A;
        long y = B;

        while(B!=0){

            long gcm = A%B;
            A = B;
            B = gcm;
        }

        long gcd = A;
        long lcm = (x*y)/gcd;

        System.out.print(gcd);
        System.out.print(" ");
        System.out.print(lcm);
    }
}