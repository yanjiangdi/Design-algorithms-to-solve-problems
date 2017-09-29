import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
	String a=sc.nextLine();
    while(sc.hasNext()){
    	String str=sc.nextLine();
    	String[] ch=str.split("\\.");
    		if(isIp(ch))
        	{
        			
        		System.out.println("Yes!");
        	}
        	else
        	{
        		System.out.println("No!");
        	}
    	}
    		
    }
	public static boolean isIp(String[] ch)
	{
		if(ch.length!=4)
		{
			return false;
		}
		else
		{
			for(int i=0;i<ch.length;i++)
			{
				if(Integer.parseInt(ch[i])>255 || Integer.parseInt(ch[i])<0)
				{
					return false;
				}
			}
		}
		
		return true;
	}
}