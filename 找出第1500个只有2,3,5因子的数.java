import java.util.Scanner;

public class Work3 {

  
    public static void main(String argv[]){

    	long[] result=new long[1500];   
        int   p2,p3,p5;   
        int   i;   
        result[0]=1;   
        p2=p3=p5=0;   
        for(i=1;i<1500;i++){   
                long    min,choice;   
                min= (result[p2]*2);   
                if(min>result[p3]*3){min=result[p3]*3;}   
                if(min>result[p5]*5){min=result[p5]*5;}   
                result[i]=min;   
                if(result[p2]*2<=result[i])p2++;   
                if(result[p3]*3<=result[i])p3++;   
                if(result[p5]*5<=result[i])p5++;   
        }   
       System.out.println(result[1499]);  
    }
     
     
 
}