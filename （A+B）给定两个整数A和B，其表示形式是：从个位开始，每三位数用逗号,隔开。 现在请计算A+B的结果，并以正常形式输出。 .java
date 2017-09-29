import java.math.BigInteger;
import java.util.Scanner;

public class Main {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    while(sc.hasNext()){
       String num1=sc.next();
       String num2=sc.next();
       String[] a1=num1.split(",");
       String[] a2=num2.split(",");
       int n1=0;
       int n2=0;
       if(!num1.startsWith("-"))
       {
    	   for(int i=a1.length-1;i>=0;i--)
           {
        	   n1+=Integer.parseInt(a1[i])*Math.pow(10, (a1.length-1-i)*3);
           }
    	   if(!num2.startsWith("-"))
    	   {
    		   for(int i=a2.length-1;i>=0;i--)
    	       {
    	    	   n2+=Integer.parseInt(a2[i])*Math.pow(10, (a2.length-1-i)*3);
    	       }
    	   }
    	   else
    	   {
    		   for(int i=a2.length-1;i>=0;i--)
    	       {
    	    	   n2+=Math.abs(Integer.parseInt(a2[i]))*Math.pow(10, (a2.length-1-i)*3);
    	       } 
    		   n2*=-1;
    	   }
       }
       else
       {
    	   for(int i=a1.length-1;i>=0;i--)
	       {
	    	   n1+=Math.abs(Integer.parseInt(a1[i]))*Math.pow(10, (a1.length-1-i)*3);
	       } 
		   n1*=-1;
		   if(!num2.startsWith("-"))
    	   {
    		   for(int i=a2.length-1;i>=0;i--)
    	       {
    	    	   n2+=Integer.parseInt(a2[i])*Math.pow(10, (a2.length-1-i)*3);
    	       }
    	   }
    	   else
    	   {
    		   for(int i=a2.length-1;i>=0;i--)
    	       {
    	    	   n2+=Math.abs(Integer.parseInt(a2[i]))*Math.pow(10, (a2.length-1-i)*3);
    	       } 
    		   n2*=-1;
    	   }
		   
       }
       
       
       System.out.println(n1+n2);
       
    }
   }

}