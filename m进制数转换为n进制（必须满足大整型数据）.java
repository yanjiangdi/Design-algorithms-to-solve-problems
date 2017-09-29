import java.math.BigInteger;
import java.util.Scanner;

/**
 * Created by 22291_000 on 2017/6/16.
 */
public class Main {
    public static void main(String[] args)
    {
       Scanner in=new Scanner(System.in);
       String b;
       int m,n;
        while(in.hasNext())
        {
        	m=in.nextInt();
        	n=in.nextInt();
            b=in.next();
            String str = new BigInteger(b,m).toString(n);
            System.out.println(str);
        }


    }

}
