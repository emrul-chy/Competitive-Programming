import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        BigInteger A, B, G;
        int t = sc.nextInt();
        String s;
        for(int i=1; i<=t; i++)
        {
            A = sc.nextBigInteger();
            s = sc.next();
            B = sc.nextBigInteger();
            G = A.gcd(B);
            System.out.println(A.divide(G) + " / " + B.divide(G));
        }
    }
    
}
