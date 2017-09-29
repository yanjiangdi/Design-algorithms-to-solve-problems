import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

/**
 * Created by 22291_000 on 2017/6/16.
 */
public class Main {
	
    public static void main(String[] args)
    {
      Scanner in=new Scanner(System.in);

      StringBuffer str =new StringBuffer("hello world");
      
      System.out.println(replaceSpace(str));
    }
    public static String replaceSpace(StringBuffer str) {
    	StringBuffer s=new StringBuffer("");
    	for(int i=0;i<str.length();i++)
    	{
    		if(str.substring(i,i+1).equals(" "))
    		{
    			s.append("%20");
    		}
    		else
    		{
    			s.append(str.substring(i, i+1));
    		}
    		
    	}
    	return s.toString();
    }
	 
}
    
	


