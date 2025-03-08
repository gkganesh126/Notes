package hello;

public class toggleEachWord {
	public static void main(String []args) {
		String str = "Hey buddy, how are youz";
		String []words = str.split(" ");
		for(String word : words) {
			char[] chArr = word.toCharArray();
			for(char ch : chArr) {
				if((int)ch>=65 && (int)ch<=90) {
					System.out.print((char)((int)ch+32));
				}
				if((int)ch>=97 && (int)ch<=122) {
					System.out.print((char)((int)ch-32));
				}
			}
			System.out.print(" ");
		}
	}
}