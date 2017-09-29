
import java.math.BigInteger;
import java.util.Scanner;


enum num{zero,one,two,three,four,five,six,seven,eight,line};
public class Main{

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        while(input.hasNext()){
        	String str=input.nextLine();
        	String[] stru=str.split("\\=");
        	String strup=stru[0];
        	String[] strN=strup.split("\\+");
        	int sum=0;
        	for(int i=0;i<strN.length;i++)
        	{
        		String [] s=strN[i].split(" ");
        		int t1=0;
        		for(int j=0;j<s.length;j++)
        		{
        			if(s[j]=="=")
        			{
        				continue;
        			}
        			else
        			{
        				int  t2 = 0;
            			//System.out.println(s[j]);
            			switch(s[j])
            			{
    	        			case "zero":
    	        				t2=0;
    	        				break;
    	        			case "one":
    	        				t2=1;
    	        				break;
    	        			case "two":
    	        				t2=2;
    	        				break;
    	        			case "three":
    	        				t2=3;
    	        				break;
    	        			case "four":
    	        				t2=4;
    	        				break;
    	        				
    	        			case "five":
    	        				t2=5;
    	        				break;
    	        			case "six":
    	        				t2=6;
    	        				break;
    	        			case "seven":
    	        				t2=7;
    	        				break;
    	        			case "eight":
    	        				t2=8;
    	        				break;
    	        			case "nine":
    	        				t2=9;
    	        				break;
    	     
    	        		}
            			
            			t1+=(int)t2*Math.pow(10, s.length-1-j);
        			}
        			
        		}
        		sum+=t1;
        	}
        	if(sum==0)
			{
				break;
			}else
			{
				System.out.println(sum);
			}
        }
    }
}
    
