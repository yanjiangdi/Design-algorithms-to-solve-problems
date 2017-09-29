import java.math.BigInteger;
import java.util.Scanner;

/**
 * Created by 22291_000 on 2017/6/16.
 */
public class Main {
    public static void main(String[] args)
    {
       Scanner in=new Scanner(System.in);
       int b;
        while(in.hasNext())
        {	
            b=in.nextInt();
           System.out.println(f(b));
        }


    }
    public static BigInteger f(int n)
    {
    	if(n==1)
    	{
    		return BigInteger.valueOf(1);
    	}
    	else
    	{
    		return BigInteger.valueOf(n).multiply(f(n-1));
    	}
    }

}
