package hello;

import java.util.*;

public class permutation {
    public void permutate(String str, int l, int r) {
        char []chArr = str.toCharArray();
        if(l == r) {
            System.out.println(String.valueOf(chArr));
        }else {
            for(int i=l; i<=r; i++) {
                str = swap(str, l, i);
                permutate(str, l+1, r);
                str = swap(str, l, i);
            }
        }
    }
    public String swap(String str, int l, int r) {
        char []chArr = str.toCharArray();
        char temp = chArr[l];
        chArr[r] = chArr[l];
        chArr[l] = temp;
        return String.valueOf(chArr);
    }
    public static void main(String []args) {
        String str = "ABC";
        permutation pm = new permutation();
        pm.permutate(str, 0, str.length());
    }
}