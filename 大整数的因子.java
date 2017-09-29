import java.math.BigInteger;
import java.util.Scanner;

/**
 * Created by 22291_000 on 2017/6/16.
 */
public class Hello {
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        BigInteger b;
        while(in.hasNext())
        {
            b=in.nextBigInteger();
            if(b.equals(BigInteger.valueOf(-1)))
            {
                break;
            }
            else
            {
                int count=0;
                int[] num=new int[8];
                for(int i=2;i<=9;i++)
                {
                    if(b.mod(BigInteger.valueOf(i)).equals(BigInteger.valueOf(0)))
                    {
                        num[count]=i;
                        count++;
                    }
                }
                if(count!=0)
                {
                    for(int i=0;i<count-1;i++)
                    {
                        System.out.print(num[i]+" ");
                    }
                    System.out.println(num[count-1]);
                }
                else
                {
                    System.out.println("none");
                }

            }

        }


    }

}
