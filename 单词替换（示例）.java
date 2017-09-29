import java.util.Scanner;
  
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String a,b,s;
        while(sc.hasNext()){
            StringBuffer bu=new StringBuffer();
            s=sc.nextLine();
            a=sc.next();
            b=sc.next();
            String a1[]=s.split(" ");
            if(!a.equals("I")){
                int m=0;
                for(String b1:a1){
                    if(b1.equals(a)&&m==0){
                        bu.append(" "+b);
                        m=1;
                    }else{
                        bu.append(" "+b1);
                        m=0;
                    }
                }
            }else{
                for(String b1:a1){
                    if(b1.equals(a)){
                        bu.append(" "+b);
                    }else{
                        bu.append(" "+b1);
                    }
                }
            }
            bu.delete(0, 1);
            System.out.println(bu.toString());
            sc.nextLine();
        }
    }
}