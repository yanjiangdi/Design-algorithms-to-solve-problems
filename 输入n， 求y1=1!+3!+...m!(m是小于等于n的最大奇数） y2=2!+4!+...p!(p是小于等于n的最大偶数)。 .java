import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String input=null;
		Scanner scanner=new Scanner(System.in);

		while(scanner.hasNext())
		{
			input=scanner.next();
			while(!isNumeric(input) )
			{
				System.out.println("ÇëÊäÈëÕûÊı");
				input=scanner.next();
			}	
			jc(input);
		}



		
		
		
	}

	public static boolean  isNumeric(String str){
	    for ( int  i=str.length();--i>=0;){
	       int  chr=str.charAt(i);
	       if(chr<48 || chr>57)
	          return false ;
	    }
	    return true ;
	}
	
	public static void jc(String number)
	
	{
		int n=Integer.parseInt(number);
		int y1 = 0,y2=0;
		if(n%2==0)
		{
			for(int i=1;i<=n-1;i+=2)
			{
				y1+=jiec(i);
			}
			for(int i=2;i<=n;i+=2)
			{
				y2+=jiec(i);
			}
		}
		else
		{
			for(int i=1;i<=n;i+=2)
			{
				y1+=jiec(i);
			}
			for(int i=2;i<=n-1;i+=2)
			{
				y2+=jiec(i);
			}
		}
		System.out.println(y1+" "+y2);
	}
	
	public static int jiec(int number)
	{
		if(number==1)
		{
			return 1;
		}
		if(number>1)
		{
			return number*jiec(number-1);
		}
		return 0;
	}
}
