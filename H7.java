
public class H7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println(getRoute(5,5));
	}
	public static int getRoute(int m,int n)
	{
		
		if(m==0&&n==0)
	    {
	            return 0;
	    }
	    else if(m==0||n==0)
	            return 1;
	    else
	            return (getRoute(m-1,n)+getRoute(m,n-1));
	}


}
