import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String input=null;
		@SuppressWarnings("resource")
		//ArrayList<String> arr=new ArrayList<>();
		Scanner scanner=new Scanner(System.in);

		while(scanner.hasNext())
		{
			input=scanner.next();
			while(!is(input))
			{
				System.out.println("请输入0-1000长度的字符串");
				input=scanner.next();
			}	
			if(hw(input))
			{
				System.out.println("Yes!");
			}
			else
			{
				System.out.println("No!");
			}
		
		}
	}

	
	public static boolean hw(String words)
	
	{
		char[] ch=words.toCharArray();
		for(int i=0;i<ch.length/2;i++)
		{
			if(ch[i]!=ch[ch.length-1-i])
			{
				return false;
			}				
		}
		return true;
		
	}
	
	
	public static boolean is(String str)
	{
		return str.length()<=1000;
	}
}
