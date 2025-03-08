package hello;

public class subtraction_of_matrices {
    public static void main(String []args) {
        int a[][] = new int[][]{
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        int b[][] = new int[][]{
            {2,2,3},
            {4,5,4},
            {6,8,7}
        };
        int rows = a.length;
        int cols = a[0].length;
        int diff[][] = new int[rows][cols];
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                diff[i][j] = a[i][j] - b[i][j];
                System.out.print(diff[i][j] + "  ");
            }
            System.out.println();
        }
    }
}