import java.util.*;
public class H1 {
    public static int NumberOf1(int n) {
		return  Integer.toBinaryString(n).replaceAll("0","").length(); }
    
	public static void main(String[] args)
	{
			String [] str=new String[4];
			str[0]="a";
			str[1]="b";
			str[2]="a";
			str[3]="b";
			Map<String,Integer> m=new HashMap<String,Integer>();
			
			for(int i=0;i<str.length;i++)
			{
				if(m.get(str[i])==null)
				{
					m.put(str[i], 1);
				}
			}
			
			for (Map.Entry<String, Integer> entry : m.entrySet()) {  
				  
			     int count=0;
			     for(int j=0;j<str.length;j++)
			     {
			    	 if(str[j].equals(entry.getKey()))
			    	 {
			    		 count++;
			    	 }
			    	 if(count>1)
			    	 {
			    		 str[j]=str[j]+(count-1);
			    	 }
			    			 
			 
			     }
			  
			}  
			System.out.print(str[0]);
			for(int i=1;i<str.length;i++)
			{
				System.out.printf(","+str[i]);
			}
			
			
			
	
	}
}