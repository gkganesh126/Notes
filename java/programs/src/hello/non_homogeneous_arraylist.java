package hello;

import java.util.*;

public class non_homogeneous_arraylist {
    public static void main(String []args) {
        ArrayList list = new ArrayList<String>();
        list.add(1);
        list.add("abc");

        Iterator itr =  list.iterator();
        while(itr.hasNext()) {
            System.out.print(itr.next() + " ");
        }
        
    }
}