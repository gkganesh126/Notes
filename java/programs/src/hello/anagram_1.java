package hello;

import java.util.Arrays;

public class anagram_1 {
    public static void main(String []args) {
        String s1 = "abcd";
        String s2 = "badc";

        char []chArr1 = s1.toCharArray();
        char []chArr2 = s2.toCharArray();
        Arrays.sort(chArr1);
        Arrays.sort(chArr2);
        System.out.println(chArr1 + " " + chArr2);
        if(Arrays.equals(chArr1, chArr2)) {
            System.out.println("yes anagram");
        }else {
            System.out.println("not anagram");
        }
    }
}