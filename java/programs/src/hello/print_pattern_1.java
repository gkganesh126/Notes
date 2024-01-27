package hello;

import java.util.Scanner;
import java.util.*;

/*
* 
* *
* * *
* * * *
* * * * *
*/
public class print_pattern_1 {
    public static void main(String []args) {
        int row=5;

        for(int i=0; i<row; i++) {
            for(int j=0; j<=i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}