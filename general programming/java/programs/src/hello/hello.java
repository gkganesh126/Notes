package hello;

import java.util.* ;

public class hello {
    public static void main(String []args) {
	Scanner sc = new Scanner(System.in);
	System.out.println("enter integer: ");
	int data1 = sc.nextInt();
	sc.nextLine();
	System.out.println("enter string: ");
	String data2 = sc.next();
	System.out.println("hello world: " + data1);
	System.out.println("hello world: " + data2);
    }
}
