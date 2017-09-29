import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int m,n = 0;
    while(sc.hasNext()){
    	n=sc.nextInt();
    		while(n<1 || n>100)
    		{
    			n=sc.nextInt();
    		}
    		
    		int [] a=new int[n];
    		for(int i=0;i<n;i++)
    		{
    			a[i]=sc.nextInt();
    		}
    		m=sc.nextInt();
    		while(m<1 || m>100)
    		{
    			m=sc.nextInt();
    		}
    		int [] b=new int[m];
    		for(int i=0;i<m;i++)
    		{
    			b[i]=sc.nextInt();
    		}
    		
    		for(int i=0;i<m;i++)
    		{
    			if(is(a,b[i]))
    			{
    				System.out.println("YES");
    			}
    			else
    				
    			{
    				System.out.println("NO");
    			}
    		}
    		
    	}
    }
public static boolean is(int[] a,int b)
{
		for(int j=0;j<a.length;j++)
		{
			if(b==a[j])
			{
				return true;
			}
		}
	
	return false;
}
}
    		
