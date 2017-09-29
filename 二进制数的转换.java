
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        while(input.hasNext()){
            int n = input.nextInt();
            int[]a = new int[n];
            for(int i = 0;i<n;i++)
                a[i] = input.nextInt();
            printBianry(a,n);
        }
    }
    public static void printBianry(int[]a,int n){
        for(int i = 0;i<n;i++)
            System.out.println(print(a[i]));
    }
    public static String print(int i){
        String s = "";
        while(i != 0){
            s = i % 2 + s;
            i /= 2;
        }
        return s;
    }
}