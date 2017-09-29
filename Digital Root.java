

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner=new Scanner(System.in);
		while(scanner.hasNext())
		{
			long num=scanner.nextInt();
			if(num==0)
			{
				break;
			}
			else
			{
				if(num>=1 && num<=9)
				{
					System.out.println(num);
				}
				else
				{
					//int n_t=0;
					while(num>9)
					{
						String n=num+"";
						num=0;
						for(int i=0;i<n.length();i++)
						{
							num+=Integer.parseInt(n.substring(i, i+1));
						}
					}
					System.out.println(num);
				}
			}
			
		}

	}
		
		
}
