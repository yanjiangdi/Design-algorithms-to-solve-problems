import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;
import java.util.TreeSet;

public class H4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println(n(2,3));
	}
	
	public static String n(int n1,int n2)
	{
		String[] str={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
		Map<String ,String>m=new HashMap<String,String>();
		if(n1<=1 || n1>9 || n2<=1 || n2>9)
		{
			return null;
		}
		else
		{
			for(int i=0;i<str[n1-1].length();i++)
			{
				for(int j=0;j<str[n2-1].length();j++)
				{
					m.put(str[n1-1].substring(i,i+1)+str[n2-1].substring(j, j+1), str[n1-1].substring(i,i+1)+str[n2-1].substring(j, j+1));
				}
			}
		}
		String [] ss=new String[m.size()];
		String sss="";
		TreeSet<String> ts = new TreeSet<String>();
		for (Entry<String, String> entry : m.entrySet()) {  
			  
		    ts.add(entry.getKey());
		    
		  
		}  
		 for (String string : ts){
	            sss=sss+string+",";
	        }
		return sss.substring(0,sss.length()-1);
	}

}
