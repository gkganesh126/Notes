package hello;

import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

// efficient approach
public class longestSubArray {
	public static Integer longestSubArr(Integer []arr) {
		int count=0, i=0, j=0, n=arr.length;
		HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
		for(i=0; i<n; i++) {
			j = Math.max(j, map.containsKey(arr[i])? map.get(arr[i]): 0);
			count = Math.max(count, i-j+1);
			map.put(arr[i], i+1);
		}
		System.out.println("Longest subarray is: ");
		for(Map.Entry<Integer, Integer> entrySet : map.entrySet()) {
			System.out.print(entrySet.getKey() + " ");
		}
		return count;
	}
	public static void main(String []args) {
		Integer []arr = {2,3,2,3,4};
		System.out.println("max longest subarray length: " + longestSubArr(arr));
	}
	/*
	 i=0; i<5; j=0; count=1; map={2:1}
	 i=1; i<5; j=0; count=2; map={2:1, 3:2}
	 i=2; i<5; j=1; count=2; map={2:3, 3:2}
	 i=3, i<5; j=2; count=2; map={2:3, 3:4}
	 i=4; i<5; j=2; count=3; map={2:3, 3:4, 4:5}
	 i=5; i>5 
	 return 3
	*/
}
