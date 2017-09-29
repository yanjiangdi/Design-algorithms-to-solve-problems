import java.util.Scanner;

public class Main {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    while(sc.hasNext()){
        int year=sc.nextInt();
        int day=sc.nextInt();
        while(year<1 || year>3000 ||day<1 || day>366)
        {
            year=sc.nextInt();
            day=sc.nextInt();
        }
        int [] month={31,28,31,30,31,30,31,31,30,31,30,31};
        if((year%4==0 && year%100!=0 ) || year%400==0)
        {
        	month[1]=29;
        }
        int sumD=0;
        int dd=0;
        int m=0;
        for(int i=0;i<month.length;i++)
        {
        	sumD+=month[i];
        	if(day>sumD)
        	{
        		;
        	}
        	else
        	{
        		dd=day+month[i]-sumD;
        		m=i+1;
        		break;
        	}
        }
        if(m<10)
        {
        	if(dd<10)
        	{
        		System.out.println(year+"-"+"0"+m+"-"+"0"+dd);
        	}
        	else
        	{
        		System.out.println(year+"-"+"0"+m+"-"+dd);
        	}
        	 
        }
        else
        {
        	if(dd<10)
        	{
        		System.out.println(year+"-"+m+"-"+"0"+dd);
        	}
        	else
        	{
        		System.out.println(year+"-"+m+"-"+dd);
        	}
        }
       
    }
        
    }
}