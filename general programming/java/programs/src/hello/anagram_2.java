package hello;

import java.util.*;

public class anagram_2 {
    public static void main(String []args) {
        String s1 = "abcd";
        String s2 = "badc";

        HashMap<Character, Integer> map = new HashMap<Character, Integer>();
        Character[] charObjectArray1 = new Character[s1.length()];
        Character[] charObjectArray2 = new Character[s2.length()];
        for(int i=0; i<s1.length(); i++) {
            charObjectArray1[i] = s1.charAt(i);
        }
        for(int i=0; i<s2.length(); i++) {
            charObjectArray2[i] = s2.charAt(i);
        }

        // to check with hashmap, make sure the elements in individual arrays/strings are distinct

        for(Character ch : charObjectArray1) {
            map.put(ch, 1);
        }
        Integer count = new Integer(0);
        for(Character ch : charObjectArray2) {
            count = map.get(ch);
            count++;
            map.put(ch, count);
        }
        int flag = 0;
        for(Map.Entry<Character, Integer> entrySet : map.entrySet()) {
            if(entrySet.getValue() != 1) {
                flag = 0;
            }else {
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            System.out.println("yes anagram");
        }else {
            System.out.println("not anagram");
        }
    }
}