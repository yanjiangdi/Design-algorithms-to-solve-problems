import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.io.Reader;
 

public class Work1 {

    public static void readTxtFile(String filePath){
        try {
                String encoding="GBK";
                int [][] ma=new int[10][20];
                File file=new File(filePath);
                if(file.isFile() && file.exists()){ //判断文件是否存在
                    InputStreamReader read = new InputStreamReader(
                    new FileInputStream(file),encoding);//考虑到编码格式
                    BufferedReader bufferedReader = new BufferedReader(read);
                    String lineTxt = null;
                    int i=0;
                    while((lineTxt = bufferedReader.readLine()) != null){
                        String [] line=lineTxt.split(" ");
                        for(int j=0;j<20;j++)
                        {
                        	ma[i][j]=Integer.parseInt(line[j]);
                        }
                        i++;
                    }
                    int[] row=new int[10];
                    int[] col=new int[20];
                    for(int m=0;m<10;m++)
                    {
                    	int h=0;
                    	for(int n=0;n<20;n++)
                    	{
                    		if(ma[m][n]>h)
                    		{
                    			h=ma[m][n];
                    		}
                    	}
                    	row[m]=h;
                    }
                    
                    for(int m=0;m<20;m++)
                    {
                    	int s=100000;
                    	for(int n=0;n<10;n++)
                    	{
                    		if(ma[n][m]<s)
                    		{
                    			s=ma[n][m];
                    		}
                    	}
                    	col[m]=s;
                    }

                    int short_of_height=row[0];
                    for(int i1=1;i1<10;i1++)
                    {
                    	if(short_of_height>row[i1])
                    	{
                    		short_of_height=row[i1];
                    	}
                    }
                    int height_of_short=row[0];
                    for(int i1=1;i1<20;i1++)
                    {
                    	if(height_of_short<col[i1])
                    	{
                    		height_of_short=col[i1];
                    	}
                    }
                    System.out.println("<矮人中的高个子>身高为："+height_of_short);
                    System.out.println("<高个子中的矮人>身高为："+short_of_height);
                    if(height_of_short>short_of_height)
                    {
                    	System.out.println("<矮人中的高个子>高于<高个子中的矮人>");
                    }
                    if(height_of_short==short_of_height)
                    {
                    	System.out.println("<矮人中的高个子>等于<高个子中的矮人>");
                    }
                    if(height_of_short<short_of_height)
                    {
                    	System.out.println("<矮人中的高个子>低于<高个子中的矮人>");
                    }
        
                    read.close();
        }else{
            System.out.println("找不到指定的文件");
        }
        } catch (Exception e) {
            System.out.println("读取文件内容出错");
            e.printStackTrace();
        }
     
    }
     
    public static void main(String argv[]){
        String filePath = "D:\\1.txt";
//      "res/";
        readTxtFile(filePath);
    }
     
     
 
}