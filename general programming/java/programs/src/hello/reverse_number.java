package hello;

import java.util.Scanner;

public class reverse_number {
    public static void main(String []args) {
        System.out.println("Enter a multi-digit number: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int temp = n;
        int sum =0, r=0;
        while(n>0) {
            r = n % 10;
            sum = (sum * 10) + r;
            n = n/10;
        }
        System.out.println("reversed no. " + sum);
    }
}