import java.util.Arrays;
import java.util.Scanner;
 
public class Main{
     
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while(in.hasNext()){
            int l1 = in.nextInt();
            int l2 = in.nextInt();
            int l3 = in.nextInt();
            int c1 = in.nextInt();
            int c2 = in.nextInt();
            int c3 = in.nextInt();
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int n1 = b-a+1;
            int len[] = new int[n1];
            int dp[] = new int[n1];
            Arrays.fill(dp,Integer.MAX_VALUE);
            dp[0]=0;
            for(int k=2;k<=n;k++){
                if(k>=a&&k<=b) len[k-a]=in.nextInt();
                else in.nextInt();
            }
            for (int i=0; i<n1-1; i++) {
                for (int j=i+1,cum=0; j<n1; j++) {
                    cum=len[j]-len[i];
                    if(cum<=l1){
                        dp[j] = Math.min(c1+dp[i],dp[j]);
                    }else if(cum<=l2){
                        dp[j] = Math.min(c2+dp[i],dp[j]);
                    }if(cum<=l3){
                        dp[j] = Math.min(c3+dp[i],dp[j]);
                    }else break;
                }
            }
            System.out.println(dp[n1-1]);
        }      
    }
     
} 