import java.util.*;
public class Main {
    public static int NumberOf1(int n) {
		return  Integer.toBinaryString(n).replaceAll("0","").length(); }
    
	public static void main(String[] args)
	{
		int n;
		Scanner in=new Scanner(System.in);
		n=in.nextInt();
		Main s=new Main();
		System.out.println(NumberOf1(n));
	}
}