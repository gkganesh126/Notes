package hello;

import java.util.Scanner;

public class reverse_string_2 {
    public static void main(String []args) {
        System.out.println("Enter a string to reverse: ");
        Scanner sc = new Scanner(System.in);
        String input = sc.next();
        int strLength = input.length();
        String reversedStr="";
        for (int i=strLength-1; i>=0; i--) {
            reversedStr = reversedStr + input.charAt(i);
        }
        System.out.println("reversed String: " + reversedStr);
    }
}