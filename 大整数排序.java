import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Collections;
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
			ArrayList<BigInteger> arr=new ArrayList<BigInteger>();
			while(n>=1 && n<=100)
			{	
				while(n>0)
				{
					BigInteger n1=scanner.nextBigInteger();
					if((n1+" ").length()<=1001 &&  (n1+" ").length()>=2 && !(n1+" ").startsWith("0"))
					{
						arr.add(n1);
					}
					n--;
				}	
			}

			Collections.sort(arr);
			for(int i=0;i<arr.size();i++)
			{
				System.out.println(arr.get(i));
			}
		}
	}

}
