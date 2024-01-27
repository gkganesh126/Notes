package dsa;

public class recursion {
	public static int Print(int n) {
		if(n==0) {
			return 0;
		}
		System.out.println(n + " ");
		return Print(n-1);

	}
	public static void main(String []args) {
		Print(5);
	}
}