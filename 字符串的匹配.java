
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

class result
{
	public result(int i, String string) {
		// TODO Auto-generated constructor stub
		this.line=i;
		this.value=string;
	}
	public int line;
	public String value;
}
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        while(input.hasNext()){
            int n = input.nextInt();
            String []str = new String[n];
            for(int i = 0;i<n;i++)
                str[i] = input.next();
            String str2=input.next();
            match(str,str2);
        }
    }
    
    public static void match(String[] str,String str2)
    {
    	//Map<String,Integer> printstr=new LinkedHashMap<String,Integer>();
    	ArrayList<result> printstr=new ArrayList<result>();
    	if(str2.contains("["))
    	{
    		String [] str2_up=new String[1000];
    		int b = 0,e = 0;
    		for(int i=0;i<str2.length();i++)
    		{
    			if(str2.substring(i,i+1).equals("["))
    			{
    				b=i;
    			}
    			if(str2.substring(i,i+1).equals("]"))
    			{
    				e=i;
    			}
    		}
    		int m=0;
    		for(int i=b+1;i<=e-1;i++)
    		{
    			str2_up[m]=str2.substring(0,b)+str2.substring(i,i+1)+str2.substring(e+1);
    			m++;
    		}
    		int k=0;
    		for(int i=0;i<m;i++)
    		{
    			for(int j=0;j<str.length;j++)
    			{
    				if(str2_up[i].toLowerCase().equals(str[j].toLowerCase()))
    				{
    					printstr.add(new result(j+1,str[j]));
    				}
    			}
    			
    		}

    		for(int i=0;i<printstr.size();i++)
    		{
    			System.out.println(printstr.get(i).line+" "+printstr.get(i).value);
    		}
    	}
    	else
    	{
    		for(int i=0;i<str.length;i++)
    		{
    			if(str[i].toLowerCase().equals(str2.toLowerCase()))
    			{
    				System.out.println((i+1)+" "+str[i]);
    			}
    		}
    	}
    	
    	
    }
    
}