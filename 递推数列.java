import java.math.BigInteger;
import java.util.Scanner;

/**
 * Created by 22291_000 on 2017/6/16.
 */
public class Main {
    public static void main(String[] args)
    {
       Scanner in=new Scanner(System.in);
       BigInteger a,b,p,q;
	   int k;
        while(in.hasNext())
        {	
        	a=in.nextBigInteger();
        	b=in.nextBigInteger();
        	p=in.nextBigInteger();
        	q=in.nextBigInteger();
        	k=in.nextInt();
        	BigInteger [] n=new BigInteger[k+1];
        	n[0]=a;
        	n[1]=b;
        	for(int i=2;i<=k;i++)
        	{
        		n[i]=p.multiply(n[i-1]).add(q.multiply(n[i-2]));
        	}
           System.out.println(n[k].mod(BigInteger.valueOf(10000)));
        }


    }
    
}
