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
       int n;
       n=in.nextInt();
       for(int i=0;i<n;i++)
       {
    	   Map<String,Integer> map=new LinkedHashMap<String ,Integer>();
    	   String str;
    	   str=in.next();
    	   for(int i1=0;i1<str.length();i1++)
    	   {
   
    		   if(map.get(str.substring(i1,i1+1))==null)
    		   {
    			   map.put(str.substring(i1,i1+1), 1);
    		   }
    		   else
    		   {
    			  int count=map.get(str.substring(i1,i1+1))+1;
    			  map.put(str.substring(i1,i1+1), count);
    		   }

    	   }
    	  for(String key:map.keySet())
    	  {
    		  if(map.get(key)==1)
    		  {
    			  System.out.println(key);
    			  break;
    		  }
    	  }
       }
       
        
      

    }
    
    
	
}

