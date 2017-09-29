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
			while(!isNumeric(input) || Integer.parseInt(input)<0 || Integer.parseInt(input)>1000000)
			{
				System.out.println("请输入0-1000000之间的整数");
				input=scanner.next();
			}	
			int result=transforEight(input);
			System.out.println(result);
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
	
	public static int transforEight(String input)
	{
		int number=Integer.parseInt(input);
		ArrayList<Integer> a=new ArrayList<>();
		while(number!=0)
		{
			a.add(number%8);
			number/=8;
		}
		//a.add(number);
		String tranNumber ="" ;
		for(int j=a.size()-1;j>=0;j--)
		{
			tranNumber+=a.get(j);
		}
		return Integer.parseInt(tranNumber);
		
	}
}
