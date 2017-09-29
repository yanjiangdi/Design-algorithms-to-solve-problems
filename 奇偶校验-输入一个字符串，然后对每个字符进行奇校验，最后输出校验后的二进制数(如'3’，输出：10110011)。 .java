import java.math.BigInteger;
import java.util.Scanner;

public class Main {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    while(sc.hasNext()){
    	String str=sc.next();
    	while(str.length()<1 || str.length()>1000)
    	{
    		System.out.println("输入有误：请输入1-1000长度的字符串");
    		str=sc.next();
    	}
    	char[] ch=str.toCharArray();
    	for(char cha:ch)
    	{
    		String str2=Integer.toBinaryString((int)(cha));
    		int count=0;
    		for(int i=0;i<str2.length();i++)
    		{
    			if(str2.substring(i,i+1).equals("1"))
    			{
    				count++;
    			}
    		}
    		if(count%2==0)
    		{
    			if(str2.length()<8)
    			{
    				System.out.print("1");
    				for(int i=0;i<8-str2.length()-1;i++)
    				{
    					System.out.print("0");
    				}
    				System.out.println(str2);
    			}
    		}
    		else
    		{

    			if(str2.length()<8)
    			{
    				for(int i=0;i<8-str2.length();i++)
    				{
    					System.out.print("0");
    				}
    				System.out.println(str2);
    			}
    		}
    	}
    }
}
    	

}