
import java.math.BigInteger;
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
            int m=input.nextInt();
            if(n==0)
            {
            	break;
            }
            else
            {
            	BigInteger bigInt = BigInteger.valueOf(1);
            	for(int i=0;i<m;i++)
                {
                	bigInt=bigInt.multiply(BigInteger.valueOf(n-i));
                }
            	
            	String str=change(bigInt.toString(),10,2);
            	int count=0;
            	for(int i=str.length()-1;i>=0;i--)
            	{
            		if(str.charAt(i)=='0'){
            			count++;
            		}
            		else
            		{
            			break;
            		}
            	}
            	System.out.println(count);

            }
        }
    }
    private static String change(String num,int from, int to){
    	return new java.math.BigInteger(num, from).toString(to);
    	}
}
    
