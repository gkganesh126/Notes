package hello;

public class rotate_array_left {
    public static void main(String []args) {
        int []arr = {1,2,3,4,5};
        int arrLength = arr.length;

        for(int ar : arr) {
            System.out.print(ar + " ");
        }
        System.out.println();
        int first = arr[0];
        for(int i=0; i<arrLength-1; i++) {
            arr[i] = arr[i+1];
        }
        arr[arrLength-1] = first;

        for(int ar : arr) {
            System.out.print(ar + " ");
        }
    }
}