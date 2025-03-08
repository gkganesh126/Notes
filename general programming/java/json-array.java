import java.util.*;
import org.json.JSONArray;

public class Main {
    public static void main(String[] args) throws Exception {
        // Your code here!
        
        System.out.println("hello javatpoint");
ArrayList<String> list = new ArrayList<String>();
list.add("blah");
list.add("bleh");
JSONArray jsArray = new JSONArray(list);
System.out.println(list);
    }
}

