import java.math.BigInteger;
import java.util.Scanner;

public class Main {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    while(sc.hasNext()){
    	int m=sc.nextInt();
    	while(m<2 || m>100)
    	{
    		System.out.println("输入有误：请输入2-100之间的整数");
    		m=sc.nextInt();
    	}
    	
    	int p=m*m;
    	String str=" "+p;
    	if(m<=3)
    	{
    		System.out.println("No!");
    	}
    	else
    	{
    		if(m<9)
    		{
    			int dw=Integer.parseInt(str.substring(2));
            	if(m==dw)
            	{
            		System.out.println("Yes!");
            	}
            	else
            	{
            		System.out.println("No!");
            	}
    		}
    		else
    		{
    			int dw=Integer.parseInt(str.substring(str.length()-2));
            	if(m==dw)
            	{
            		System.out.println("Yes!");
            	}
            	else
            	{
            		System.out.println("No!");
            	}
    		}
    		
        	
    	}
    	
    }

	}
}