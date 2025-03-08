package hello;

import java.util.Arrays;
import java.util.List;
import java.util.Collections;

public class built_in_collections_sort {
    public static void main(String []args) {
        // for distinct integer array
        Integer arr[] = new Integer[] {5,3,6,2};
        System.out.println("Original array: ");
        for(int ar : arr) {
            System.out.print(ar + " ");
        }

        List<Integer> lst = Arrays.asList(arr);
        Collections.sort(lst);
        System.out.println("Sorted list: ");
        for(int lt : lst) {
            System.out.print(lt + " ");
        }
        Integer secondMax = lst.get(arr.length-2);
        System.out.println("second max element: "+ secondMax);
    }
}