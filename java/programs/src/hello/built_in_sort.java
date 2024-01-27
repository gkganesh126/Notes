package hello;

import java.util.Arrays;
import java.util.Collections;

public class built_in_sort {
    public static void main(String []args) {
        int []arr = new int[]{3,4,2,5,1};
        Arrays.sort(arr);
        System.out.println("Sorted array: ");
        for(int ar : arr) {
            System.out.print(ar + " ");
        }
        System.out.println();
    }
}