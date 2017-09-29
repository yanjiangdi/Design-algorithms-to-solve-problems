import java.math.BigInteger;
import java.util.Scanner;

public class Main {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    while(sc.hasNext()){
    	BigInteger a=sc.nextBigInteger();
    	BigInteger b=sc.nextBigInteger();
    	while((a+" ").length()<2 || (a+" ").length()>1001 ||(b+" ").length()<2||(b+" ").length()>1001)
    	{
    		System.out.println("输入有误：请输入1-1000长度的整数");
    		a=sc.nextBigInteger();
    		b=sc.nextBigInteger();
    	}
    	System.out.println(a.add(b));

    	}
    	
	}
}