import java.util.Scanner;

public class Work4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
				Scanner scanner=new Scanner(System.in);
				int a=scanner.nextInt();
		        int b[][];
		        b = new int[a][];
		        for (int i = 1; i <= 10; i++) {
		            b[i - 1] = new int[i];
		        }
		        for (int j = 0; j < 10; j++) {
		            for (int k = 0; k <= j; k++) {
		                if (j == 0 || k == 0 || k == j)// ��֧
		                {
		                    b[j][k] = 1;// ����1��
		                    continue;
		                } else {
		                    b[j][k] = b[j - 1][k - 1] + b[j - 1][k];// ����ֵ
		                }
		            }
		        }
		        for (int m = 0; m < 10; m++) {
		            for (int n = 0; n <= m; n++) {
		                System.out.print(b[m][n] + " ");// ѭ�����
		            }
		            System.out.println(" ");
		        }
	

	}

}
