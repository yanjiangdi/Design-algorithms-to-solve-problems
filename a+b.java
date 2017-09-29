import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int a,b;
		@SuppressWarnings("resource")
		//ArrayList<String> arr=new ArrayList<>();
		Scanner scanner=new Scanner(System.in);

		while(scanner.hasNext())
		{
			a=scanner.nextInt();
			b=scanner.nextInt();
			System.out.println(a+b);
		}
	}


}
