package hello;

import java.util.Arrays;
import java.util.Map;
import java.util.HashMap;

public class frequency_of_element_in_array {
    public static void main(String []args) {
        Integer arr[] = {4,1,5,2,8,1,4};
        int arrLength = arr.length;
        Integer count;
        Map<Integer,Integer> freq = new HashMap<Integer,Integer>();
        for(int ar : arr) {
            count = freq.get(ar);
            System.out.println("count: "+ count);
            if(count != null) {
                count++;
                freq.put(ar, count);
            }else {
                freq.put(ar, 1);
            }
        }
        for(Map.Entry<Integer,Integer> entrySet : freq.entrySet()) {
            System.out.println("Frequency of " + entrySet.getKey() + " is " + entrySet.getValue());
        }
    }
}