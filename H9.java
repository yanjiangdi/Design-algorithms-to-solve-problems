import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.Map;

public class H9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println(Test("C"));
	}
	
	public static String Test(String str)
	{
		String [] keys={"A","B","C","D","E","F","G","H","I"};
		Map<String ,String[]> m=new LinkedHashMap<String ,String[]>();
		String[] sa={"B","C","D","E","F","G","H","I"};
		m.put("A", sa);
		String[] sb={"E"};
		m.put("B", sb);
		String[] sc={"F","G","H"};
		m.put("C", sc);
		String[] sd={"I"};
		m.put("D", sd);
		String ss="";
		for (Map.Entry<String ,String[]> e : m.entrySet()) {  
			 
			//System.out.println(e.getKey());
			
			if(e.getKey().equals(str))
			{
				//System.out.println(e.getKey());
				for(int i=0;i<9;i++)
				{
					for(int j=0;j<e.getValue().length;j++)
					{
						if(keys[i].equals(e.getValue()[j]))
						
						{
							keys[i]="0";
						}
					}
					if(keys[i].equals(e.getKey()))
					{
						keys[i]="0";
					}
				}
				
				for(int i=0;i<9;i++)
					
				{
					//System.out.print(keys[i]+" ");
					if(!keys[i].equals("0"))
					{
						ss=ss+keys[i];
					}
				}
				
				break;
			}
			
		  
		}  
		
			
		
		return ss;
		
		
		
	}

}
