import java.math.BigInteger;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            BigInteger bi = new BigInteger("1");
            for (int i = 2; i <=n; i++)
                bi = bi.multiply(new BigInteger(String.valueOf(i)));
            int count = 0;
            while (bi.compareTo(new BigInteger(String.valueOf(k))) >0) {
                if (bi.mod(new BigInteger(String.valueOf(k))).equals(
                        BigInteger.ZERO)) {
                    bi = bi.divide(new BigInteger(String.valueOf(k)));
                    count++;
                } else {
                    break;
            }   }
             
            System.out.println(count);
        }
    }
}

