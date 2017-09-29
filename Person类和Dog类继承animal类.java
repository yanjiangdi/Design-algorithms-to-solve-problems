package hw;
abstract class animal{
	
	abstract public void sleep();
}

class Person extends animal{

	@Override
	public void sleep() {
		// TODO Auto-generated method stub
		System.out.println("人睡觉");
	}
	
}

class  Dog extends animal
{

	@Override
	public void sleep() {
		// TODO Auto-generated method stub
		System.out.println("狗睡觉");
	}
	
}
public class h4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Person person=new Person();
		person.sleep();
		Dog dog=new Dog();
		dog.sleep();
	}

}
