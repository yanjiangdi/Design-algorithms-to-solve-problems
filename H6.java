import java.security.KeyStore.Entry;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
public class H6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String[] s={"A","B","C","D","E","F","G"};
		int [] w={7,5,3,2,6,1,4,9};
		int n=5;
		String [] ss=topN(s,w,5);
		for(int j=0;j<ss.length;j++)
		{
			System.out.print(ss[j]+" ");
		}
		
	}
	public static String[]  topN(String[] s,int[] w,int n)
	{
		Map<String,Integer>m=new LinkedHashMap<String,Integer>();
		for(int i=0;i<s.length;i++)
		{
			int score=w[i]+i+1;
			m.put(s[i], score);
		}
		Map mu=new LinkedHashMap<String,Integer>();
		mu=sortMap(m);
		String [] str=new String[n];
		int k=0;
		Iterator it = mu.entrySet().iterator();  
        while(it.hasNext() && k<=n-1){  
            Map.Entry e = (Map.Entry) it.next();  
            str[k]=(String) e.getKey();
            k++;}
        
        return str;
		
		
	}
	private static void printMap(Map map){  
        System.out.println("===================mapStart==================");  
        Iterator it = map.entrySet().iterator();  
        while(it.hasNext()){  
            Map.Entry entry = (Map.Entry) it.next();  
            System.out.println(entry.getKey() + ":" + entry.getValue());  
        }  
        System.out.println("===================mapEnd==================");  
    }   

	 public static Map sortMap(Map oldMap) {  
	        ArrayList<Map.Entry<String, Integer>> list = new ArrayList<Map.Entry<String, Integer>>(oldMap.entrySet());  
	        Collections.sort(list, new Comparator<Map.Entry<String, Integer>>() {  
	  
	   

				@Override
				public int compare(java.util.Map.Entry<String, Integer> arg0,
						java.util.Map.Entry<String, Integer> arg1) {
		 
	                return arg0.getValue() - arg1.getValue(); }
				 
	        });  
	        Map newMap = new LinkedHashMap();  
	        for (int i = 0; i < list.size(); i++) {  
	            newMap.put(list.get(i).getKey(), list.get(i).getValue());  
	        }  
	        return newMap;  
	    }  
	}  

