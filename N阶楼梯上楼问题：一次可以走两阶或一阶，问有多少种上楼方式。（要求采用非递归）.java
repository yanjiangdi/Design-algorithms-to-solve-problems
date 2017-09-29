import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int n ;
		Scanner scanner=new Scanner(System.in);
		while(scanner.hasNext())
		{
			n=scanner.nextInt();
			while(n<1 ||n>90)
			{
				System.out.println("请输入大于1-90的整数");
				n=scanner.nextInt();
			}
			System.out.println(fab(n));
		}
		
	}

	public static long fab(int n)
	{
		if(n==1)
		{
			return 1;
		}
		if(n==2)
		{
			return 2;
		}
		else
		{
			long f1 = 1;
			long f2 = 2;
			for(int i = 3; i <= n; ++i){//斐波那契数列；
				f2 += f1;
				f1 = f2 - f1;
			}
			return f2;
		}

	}
}
