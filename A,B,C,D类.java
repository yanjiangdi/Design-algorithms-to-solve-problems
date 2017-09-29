package hw;

class A{
	
	public void g()
	{
		System.out.println("a b c d e f g h i j k l m n o p q r s t u v w x y z");
	}
}

class B extends A{
	
	public void f()
	{
		System.out.println("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
	}
}

class D extends B{
	
	public void g()
	{
		this.f();
		super.g();
	}
}
public class C {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		A a=new A();
		a.g();
		B b=new B();
		b.g();
		b.f();
		D d=new D();
		d.g();
		
	}

}
