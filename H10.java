
public class H10 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String [] str={"100.1","abcd","20170101","true"};
		System.out.println(test(str));
	}
	public static String test(String[] str)
	{
		String ss="";
		
		for(int i=0;i<str.length;i++)
		{
			if(str[i].contains(":")||(str[i].length()==8 && str[i].matches("^\\d+$") && Integer.parseInt(str[i].substring(4 ,6))>=1 && Integer.parseInt(str[i].substring(4 ,6))<=12 && Integer.parseInt(str[i].substring(6 ,8))>=1 && Integer.parseInt(str[i].substring(6 ,8))<=31))
			{
				ss=ss+"Date"+",";
			}
			else if(str[i].contains("true")||str[i].contains("false"))
			{
				ss=ss+"Boolean"+",";
			}
			else if(str[i].contains(".")||str[i].contains("e")|| str[i].contains("%") || str[i].matches("^\\d+$"))
			{
				ss=ss+"Number"+",";
			}
			else
			{
				ss=ss+"String"+",";
			}
		}
		String s=ss.substring(0,ss.length()-1);
		return s;
	}
}
