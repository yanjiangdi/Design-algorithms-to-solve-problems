import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
	//String s=sc.nextLine();
    while(sc.hasNext()){
    	String str=sc.nextLine();
    	String[] ch=str.split(" ");
    	for(int i=0;i<ch.length;i++)
    	{
    		if(i==ch.length-1)
    		{
    			System.out.println(ch[i].length()-1);
    		}
    		else
    		{
    			System.out.print(ch[i].length()+" ");
    		}
    	}
    }
}
    		
}