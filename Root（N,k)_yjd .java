import java.math.BigInteger;
import java.util.Scanner;

/**
 * Created by 22291_000 on 2017/6/16.
 */
public class Main {
    public static void main(String[] args)
    {
       Scanner in=new Scanner(System.in);
       BigInteger x;
       int y,k;
        while(in.hasNext())
        {	
        	x=in.nextBigInteger();
        	y=in.nextInt();
        	k=in.nextInt();
        	BigInteger r=x.pow(y);
        	while(r.compareTo(BigInteger.valueOf(k))!=-1)
        	{
        		String str=new BigInteger(r.toString(),10).toString(k);
        		int t=0;
        		for(int i=0;i<str.length();i++)
        		{	
        			if(str.charAt(i)>'a' && str.charAt(i)<='z')
        			{
        				t+=str.charAt(i)-87;
        			}
        			else
        			{
        				t+=Integer.parseInt(str.substring(i,i+1));
        			}
        			
        		}
        		String s=Integer.toString(t);
        		r=new BigInteger(s);
        	}
        	 System.out.println(r);
        }
       


    }
    
}
