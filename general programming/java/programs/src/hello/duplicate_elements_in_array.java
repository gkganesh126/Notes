package hello;

import java.util.Map;
import java.util.HashMap;
import java.util.Arrays;

public class duplicate_elements_in_array {
    public static void main(String []args) {
        Integer []arr = {1,2,3,1,2,2, 3,4};
        int arrLength = arr.length;
        int visited[] = new int[arrLength];
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        Arrays.fill(visited, 0);

        Integer count=0;
        for(int i=0; i<arrLength; i++) {
            count = map.get(arr[i]);
            if(count != null) {
                count++;
                map.put(arr[i], count);
            }else {
                map.put(arr[i], 1);
            }
        }
        System.out.println("Duplicated elements: ");
        for(Map.Entry<Integer, Integer> entrySet : map.entrySet()) {
            if(entrySet.getValue() > 1) {
                System.out.println(entrySet.getKey() + " ");
            }
        }
    }
}