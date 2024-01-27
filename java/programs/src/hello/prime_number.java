package hello;

import java.util.Scanner ;

public class prime_number {
    public static void main(String []args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int noToBeChecked = sc.nextInt();
        //int m = noToBeChecked/2; //or sqrt(noToBeChecked)
        int m = (int)Math.sqrt(noToBeChecked);
        Boolean flag=false;
        if(noToBeChecked==0 || noToBeChecked==1) {
            System.out.println(noToBeChecked + " is not a prime number");
        }
        for(int i=2; i<m; i++) {
            if(noToBeChecked%i == 0) {
                flag = true;
                break;
            }
        }
        if(flag.equals(true)) {
            System.out.println(noToBeChecked + " is not a prime number");
        } else {
            System.out.println(noToBeChecked + " is prime number");
        }
    }
}