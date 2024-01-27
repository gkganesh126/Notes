package hello;

import java.util.Scanner;

public class reverse_string_1 {
    public static void main(String []args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string to reverse: ");
        String input = sc.next();

        String reversedInput = new StringBuffer(input).reverse().toString();
        System.out.println(reversedInput);
    }
}