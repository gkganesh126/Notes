package hello;

 class Student {
	int id;
	String name;
	Student(int id, String name) {
		this.id = id;
		this.name = name;
	}
}
public class javaConstructor {
	
	public static void main(String []args) {
		Student s1 = new Student(1, "abc");
		Student s2 = s1;
		System.out.println(s1 + " " + s1.id + " " + s1.name);
		System.out.println(s2 + " " + s2.id + " " + s2.name);
	}
}

