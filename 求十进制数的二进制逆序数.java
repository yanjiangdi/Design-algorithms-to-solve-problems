import java.math.BigInteger;
import java.util.Scanner;

/**
 * Created by 22291_000 on 2017/6/16.
 */
public class Main {
    public static void main(String[] args)
    {
       Scanner in=new Scanner(System.in);
       BigInteger b;
        while(in.hasNext())
        {	
            b=in.nextBigInteger();
            String str = new BigInteger(b.toString(),10).toString(2);
            String s="";
            for(int i=str.length()-1;i>=0;i--)
            {
            	s=s+str.substring(i,i+1);
            }
            String ss=new BigInteger(s,2).toString(10);
            System.out.println(ss);
        }


    }

}
