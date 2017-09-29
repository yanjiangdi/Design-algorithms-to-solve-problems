import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

/**
 * Created by 22291_000 on 2017/6/16.
 */
public class Main {
	
    public static void main(String[] args)
    {
       
      int [][]array={{1,1,1},
    		  {2,2,2},
    		  {3,3,3}
      };
      System.out.println(Find(5,array));
    }
	public static  boolean Find(int target, int [][] array) {
			
		for(int i=0;i<array.length;i++)
		{
			for(int j=0;j<array[i].length;j++)
			{
				if(array[i][j]==target)
				{
					return true;
				}
			}
		}
		return false;
	 }
}
    
	


