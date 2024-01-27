package hello;

public class rotate_array_right {
    public static void main(String []args) {
        int []arr = {1,2,3,4,5};
        int arrLength = arr.length;
        for(int ar : arr) {
            System.out.print(ar + " ");
        }
        System.out.println();

        int last = arr[arrLength-1];
        for(int i=arrLength-1; i>0; i--) {
            arr[i] =arr[i-1];
        }
        arr[0] = last;
        for(int ar : arr) {
            System.out.print(ar + " ");
        }
    }
}