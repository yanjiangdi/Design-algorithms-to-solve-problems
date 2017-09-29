
import java.math.BigInteger;
import java.util.Scanner;



public class Main{

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        while(input.hasNext()){
        	int a=input.nextInt();
        	int n=input.nextInt();
        	while(a<1 || a>9 || n<1 || n>100)
        	{
        		a=input.nextInt();
        		n=input.nextInt();
        	}
        	BigInteger sum=BigInteger.valueOf(0);
        	for(int i=1;i<=n;i++)
        	{
        		String str ="";
        		for(int j=0;j<i;j++)
        		{
        			str+=a;
        		}
        		sum=sum.add(new  BigInteger(str));
        	}
        	System.out.println(sum.toString());
        }
    }
}
    
