package hello;

class Bird {
	void fly() {
		System.out.println("Bird is flying");
	}
}
class Sparrow extends Bird {
	void fly() {
		System.out.println("Sparrow is flying");
	}
}
public class singleInheritance {
	public static void main(String []args) {
		Bird b = new Sparrow();
		b.fly();
		Sparrow s = new Sparrow();
		s.fly();
		Bird b1 = new Bird();
		b1.fly();
	}
}