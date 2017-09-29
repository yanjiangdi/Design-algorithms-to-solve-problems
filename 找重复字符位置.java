import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

	public static Map<Character, Integer> counts = new LinkedHashMap<Character, Integer>();
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String input=null;
		@SuppressWarnings("resource")
		Scanner scanner=new Scanner(System.in);

		while(scanner.hasNext())
		{
			input=scanner.next();
			while(!is(input))
			{
				System.out.println("请输入0-100长度仅含有整数和字母的字符串");
				input=scanner.next();
			}	
			wc(input);
			counts.clear();
		}	
		
	}

	
	public static void wc(String words)
	
	{
		for(Character w:words.toCharArray())
		{
	        Integer count = counts.get(w);
	        if (count == null)
	            count = 0;
	        count++;
	        counts.put(w, count);
		}
		for (Map.Entry<Character, Integer> m :counts.entrySet())  {  
			if (m.getValue() > 1)
			{
				lo(words,m.getKey());
				//System.out.println(m.getKey());
			}
        }  
	       
		

	}
	public static void lo(String words,char word)
	
	{
		char[] ch=words.toCharArray();
		int j=0;
		for(int i=0;i<ch.length;i++)
		{
			if(ch[i]==word)
			{
				j++;
				if(j<counts.get(ch[i]))
				{
					System.out.print(word+":"+i+",");
				}
				else
				{
					System.out.print(word+":"+i);
				}
				
			}
		}
		System.out.println();
	}
	
	public static boolean is(String str)
	{
		return str.matches("^[a-zA-Z0-9]{0,100}$");
	}
}
