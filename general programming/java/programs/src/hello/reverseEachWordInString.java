package hello;

public class reverseEachWordInString {
	public static void main(String []args) {
		String str = "hey buddy, how are you";
		String []words = str.split(" ");
		for(String word : words) {
			StringBuffer buffer = new StringBuffer(word);
			System.out.println(buffer.reverse().toString()
					+ " ");
		}
	}
}