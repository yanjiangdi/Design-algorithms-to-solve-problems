
public class H2 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		String str[]=new String[3];
		str[0]="select * from a";
		str[1]="select * from a limit 10";
		str[2]="select * from (select a from b limit 10) groupby b";
		String [] s=refTest(str);
		for(int i=0;i<s.length;i++)
		{
			System.out.print(s[i]+" ");
		}
	}
	
	public static String[]  refTest(String[] cas)throws Exception{
		int l=cas.length;
		String [] str=new String[l];
		for(int i=0;i<cas.length;i++)
		{
			if(!cas[i].contains("("))
			{
				if(!cas[i].contains("limit"))
				{
					str[i]="yes";
				}
				else
				{
					str[i]="no";
				}
				
			}
			else
			{
				int in1=cas[i].indexOf("(");
				int in2=cas[i].lastIndexOf(")");
				
				String str1=cas[i].substring(0, in1)+cas[i].substring(in2+1);
				if(!str1.contains("limit"))
				{
					str[i]="yes";
				}
				else
				{
					str[i]="no";
				}
			}
		}
		
		return str;
		
		
		
	}
	
	

}
