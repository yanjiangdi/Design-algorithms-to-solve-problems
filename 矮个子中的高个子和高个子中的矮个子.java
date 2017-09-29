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
                if(file.isFile() && file.exists()){ //�ж��ļ��Ƿ����
                    InputStreamReader read = new InputStreamReader(
                    new FileInputStream(file),encoding);//���ǵ������ʽ
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
                    System.out.println("<�����еĸ߸���>���Ϊ��"+height_of_short);
                    System.out.println("<�߸����еİ���>���Ϊ��"+short_of_height);
                    if(height_of_short>short_of_height)
                    {
                    	System.out.println("<�����еĸ߸���>����<�߸����еİ���>");
                    }
                    if(height_of_short==short_of_height)
                    {
                    	System.out.println("<�����еĸ߸���>����<�߸����еİ���>");
                    }
                    if(height_of_short<short_of_height)
                    {
                    	System.out.println("<�����еĸ߸���>����<�߸����еİ���>");
                    }
        
                    read.close();
        }else{
            System.out.println("�Ҳ���ָ�����ļ�");
        }
        } catch (Exception e) {
            System.out.println("��ȡ�ļ����ݳ���");
            e.printStackTrace();
        }
     
    }
     
    public static void main(String argv[]){
        String filePath = "D:\\1.txt";
//      "res/";
        readTxtFile(filePath);
    }
     
     
 
}