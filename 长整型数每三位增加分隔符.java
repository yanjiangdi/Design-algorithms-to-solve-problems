

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner=new Scanner(System.in);
		while(scanner.hasNext())
		{
			long a;
			a=scanner.nextLong();
			String string=String.valueOf(a);
			int length=string.length();
			int count=length/3;
			System.out.print(string.substring(0, length-3*count));
			int l=length-3*count;
			if(l==0)
			{
				for(int i=0;i<count;i++)
				{
					if(i!=count-1)
					{
						System.out.print(string.substring(l,l+3)+",");
					}
					else
					{
						System.out.print(string.substring(l,l+3));
					}		
					l+=3;
				}
				
			}
			else
			{
				for(int i=0;i<count;i++)
				{
					System.out.print(","+string.substring(l,l+3));
					l+=3;
				}
				
			}
		
			System.out.println();	
			
		}

	}
		
		
}
