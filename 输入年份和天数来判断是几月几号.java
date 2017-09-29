package c;

import java.util.Scanner;

import io.netty.handler.codec.spdy.SpdyStreamFrame;

public class P1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in =new Scanner(System.in);
		int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
		while(in.hasNext())
		{
			int year=in.nextInt();
			int days=in.nextInt();
			if(isR(year))
			{
				months[1]=29;
			}
			else
			{
				months[1]=28;
			}
			int sum=0;
			int m=0;
			for(int i=0;i<12;i++)
			{
				sum+=months[i];
				if(sum>=days)
				{
					m=i+1;
					break;
				}
			}
			System.out.println(m+"月"+(days-(sum-months[m-1]))+"日");
			
		}
	}
	
	public static boolean isR(int year)
	{
		if((year%4==0 && year%100!=0) || year%400==0)
		{
			return true;
		}
		return false;
		
		
	}

}
