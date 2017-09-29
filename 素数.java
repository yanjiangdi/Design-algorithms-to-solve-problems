
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;



public class Main{
	public static ArrayList<Integer> arr =new ArrayList<Integer>();
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        while(input.hasNext()){
            int n = input.nextInt();
            if(match(n))
            {
            	for(int i=0;i<arr.size()-1;i++)
        		{
        			System.out.print(arr.get(i)+" ");
        		}
        		System.out.println(arr.get(arr.size()-1));
        		arr.clear();
        		
            }else
            {
            	System.out.println(-1);
            }
            //System.out.println();
        }
    }
    
    public static boolean isSu(int num)
    {
    	int count=0;
    	for(int i=1;i<=num;i++)
    	{
    		if(num%i==0)
    		{
    			count++;
    		}
    	}
    	
    	if(count==2)
    	{
    		return true;
    	}
    	return false;
    }
    
    public static boolean match(int num)
    {

    	for(int i=1;i<num;i++)
    	{
    		if(isSu(i) && (""+i).endsWith("1"))
    		{
    			arr.add(i);
    		}
    	}
    	
    	if(arr.size()>0)
    	{
    		return true;
    	}
    	
    	return false;
    	
    }
    
    
}