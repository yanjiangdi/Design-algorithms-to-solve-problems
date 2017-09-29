import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;
class Student implements Comparable  {
	private String sid;
	private double C1;
	private double C2;
	private double C3;
	private double C4;
	private double av;
	private double sum;
	
	public double getAv() {
		return av;
	}
	public void setAv(double av) {
		this.av = av;
	}
	public double getSum() {
		return sum;
	}
	public void setSum(double sum) {
		this.sum = sum;
	}
	public String getSid() {
		return sid;
	}
	public void setSid(String sid) {
		this.sid = sid;
	}
	public double getC1() {
		return C1;
	}
	public void setC1(double c1) {
		this.C1 = c1;
	}
	public double getC2() {
		return C2;
	}
	public void setC2(double c2) {
		this.C2 = c2;
	}
	public double getC3() {
		return C3;
	}
	public void setC3(double c3) {
		this.C3 = c3;
	}
	public double getC4() {
		return C4;
	}
	public void setC4(double c4) {
		this.C4 = c4;
	}
	@Override
	public int compareTo(Object arg0) {
		// TODO Auto-generated method stub
		Student s=(Student)arg0;  
        return this.getSum()<s.getSum() ? 1:(this.getSum()==s.getSum() ? 0 :-1); 
	}
	
}
public class StudentInfo {
	
	
	
	
	@SuppressWarnings("unchecked")
	public static void main(String[] args) {

		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("请输入需要的学生人数：");
		int count=sc.nextInt();
		Student[] s=new Student[count];
		System.out.println("请输入学生信息：");
		init(count,s);
		input(count,s);
		ac_sum(count,s);
		selectSort(s);
		System.out.println("学号          课程1       课程2        课程3       课程4       平均分      总分");
		for(int i=0;i<count;i++)
		{
			System.out.println(s[i].getSid()+"     "+s[i].getC1()+"     "+s[i].getC2()+"     "+s[i].getC3()+"      "+s[i].getC4()+"      "+s[i].getAv()+"     "+s[i].getSum());
		}
		System.out.println("请输入课程号：");
			String course=sc.next();
			System.out.println("学号          课程1       课程2        课程3       课程4      平均分      总分");
			if(course.equals("C1"))
			{
				for(int i=0;i<5;i++)
				{
					if(s[i].getC1()>=90)
					{
						System.out.println(s[i].getSid()+"     "+s[i].getC1()+"     "+s[i].getC2()+"     "+s[i].getC3()+"      "+s[i].getC4()+"      "+s[i].getAv()+"     "+s[i].getSum());
					}
				}
			
			}
				
			if(course.equals("C2"))
			{
				for(int i=0;i<5;i++)
				{
					if(s[i].getC2()>=90)
					{
						System.out.println(s[i].getSid()+"     "+s[i].getC1()+"     "+s[i].getC2()+"     "+s[i].getC3()+"      "+s[i].getC4()+"      "+s[i].getAv()+"     "+s[i].getSum());
					}
				}
				
			}
			
			if(course.equals("C3"))
				{
					for(int i=0;i<5;i++)
					{
						if(s[i].getC3()>=90)
						{
							System.out.println(s[i].getSid()+"     "+s[i].getC1()+"     "+s[i].getC2()+"     "+s[i].getC3()+"      "+s[i].getC4()+"      "+s[i].getAv()+"     "+s[i].getSum());
						}
					}
				}
			
				if(course.equals("C4"))	
				{
					for(int i=0;i<5;i++)
					{
						if(s[i].getC4()>=90)
						{
							System.out.println(s[i].getSid()+"     "+s[i].getC1()+"     "+s[i].getC2()+"     "+s[i].getC3()+"      "+s[i].getC4()+"      "+s[i].getAv()+"     "+s[i].getSum());
						}
					}
				
				
				}
			
			
		}

	
	
	public static void input(int n,Student[] s)
	{
		Scanner sc=new Scanner(System.in);
		for(int i=0;i<n;i++)
		{
			s[i].setSid(sc.next());
			s[i].setC1(sc.nextDouble());
			s[i].setC2(sc.nextDouble());
			s[i].setC3(sc.nextDouble());
			s[i].setC4(sc.nextDouble());
		}
		
	}
	public static void ac_sum(int n,Student[] s)
	{
		for(int i=0;i<n;i++)
		{
			s[i].setSum(s[i].getC1()+s[i].getC2()+s[i].getC3()+s[i].getC4());
			s[i].setAv(s[i].getSum()/4);
		}
		
	}
	
	public static void init(int n,Student[]  s)
	{
		for(int i=0;i<n;i++)
		{
			s[i]=new Student();
		}
		
	}
	
	
	public static Student [] selectSort(Student [] studentInfo){//选择排序算法
        for (int i=0;i<studentInfo.length-1 ;i++ ){
               int t=i;
               for (int j=i+1;j<studentInfo.length ;j++ ){
                       if (studentInfo[t].getSum()<studentInfo[j].getSum()){
                                t=j;
                        }
                }
                if (t!=i){
                    Student temp=studentInfo[i];
                    studentInfo[i]=studentInfo[t];
                    studentInfo[t]=temp;        
                }
           }
            return studentInfo;
      }


}