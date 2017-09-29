import java.math.BigInteger;
import java.util.Scanner;

public class Main {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    while(sc.hasNext()){
    	int m=sc.nextInt();
    	int n=sc.nextInt();
    	int[][]  max = new int[100][100];
    	while(m<1 || m>100 ||n<1 || n>100)
    	{
    		System.out.println("输入有误：请输入1-100之间的整数");
    		m=sc.nextInt();
    		n=sc.nextInt();
    	}
    	for(int i=0;i<m;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			max[i][j]=sc.nextInt();
    		}
    	}
    	for(int i=0;i<m;i++)
    	{
    		int po=0,ls=0,ma=0;
    		for(int j=0;j<n;j++)
    		{
    			if(ma<max[i][j])
    			{
    				ma=max[i][j];
    				po=j;
    			}
    			ls+=max[i][j];
    		}
    		max[i][po]=ls;
    	}
    	for(int i=0;i<m;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			if(j<n-1)
    			{
    				System.out.print(max[i][j]+" ");
    			}
    			else
    			{
    				System.out.print(max[i][j]);
    			}
    		}
    		System.out.println();
    	}
    }

      
    }

	public static boolean isD(int [][] max,int number)
	{
		for(int i=0;i<number;i++)
    	{
    		for(int j=0;j<=i;j++)
    		{
    			if(max[i][j]!=max[j][i])
    			{
    				return false;
    			}
    		}
    	}
		return true;
	}
}