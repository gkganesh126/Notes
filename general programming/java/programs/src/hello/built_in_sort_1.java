package hello;

import java.util.Collections;
import java.util.Arrays;

public class built_in_sort_1 {
    public static void main(String []args) {
        Integer []arr = new Integer[] {5,3,5,2,7};
        System.out.println("original array: ");
        for(int ar : arr) {
            System.out.println(ar + " ");
        }
        Arrays.sort(arr, Collections.reverseOrder());
        System.out.println("reverseOrder sorted array: ");
        for(int ar : arr) {
            System.out.println(ar + " ");
        }
    }
}