
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;



public class Main{

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        while(input.hasNext()){
            int n = input.nextInt();
            if(n==0)
            {
            	break;
            }
            else
            {
            	ArrayList<Integer> arr=new ArrayList<Integer>();
            	for(int i=0;i<n;i++)
                {
                	arr.add(input.nextInt());
                }
            	int result=0;
         		Collections.sort(arr);
            	while(arr.size()>=2)
            	{
            		int sum=arr.get(0)+arr.get(1);
            		result+=sum;
            		arr.remove(0);
            		arr.remove(0);
            		arr.add(sum);
             		Collections.sort(arr);
            		
            	}
            	System.out.println(result);
            }           
        }
    
    }
}
    
