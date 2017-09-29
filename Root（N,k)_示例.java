import java.util.Scanner;
 
public class Y {
 
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            long a = sc.nextLong();
            long b = sc.nextLong();
            long c = sc.nextLong();
 
            c--;
            long ans = 1;
            a = a % c;
            while (b > 0) {
                if (b % 2 == 1)
                    ans = (ans * a) % c;
                b = b / 2;
                a = (a * a) % c;
            }
            System.out.println(ans == 0 ? c : ans);
        }
        sc.close();
    }
 
}

