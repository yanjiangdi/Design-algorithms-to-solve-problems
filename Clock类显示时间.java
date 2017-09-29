package hw;
class Clock
{
	private int hour=24;
	private int minute=0;
	private int second=0;
	
	public Clock(int h,int m,int s)
	{
		this.hour=h;
		this.minute=m;
		this.second=s;
	}
	public Clock(){}
	
	public void show()
	{
		if(this.minute<10)
		{
			if(this.second<10)
			{
				System.out.println("当前时间为："+this.hour+":0"+this.minute+":0"+this.second);
			}
			else{
				System.out.println("当前时间为："+this.hour+":0"+this.minute+":"+this.second);
			}
		}
		else{
			if(this.second<10)
			{
				System.out.println("当前时间为："+this.hour+":"+this.minute+":0"+this.second);
			}
			else{
				System.out.println("当前时间为："+this.hour+":"+this.minute+":"+this.second);
			}
		}
	}
}
public class h2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Clock c1=new Clock(12,11,10);
		c1.show();
		Clock c2=new Clock();
		c2.show();
		Clock c3=new Clock(12,1,2);
		c3.show();
	}

}
