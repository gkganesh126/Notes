package hello;

public class subArraySumEquals {
	public static void main(String []args) {
		int[] arr = {1,2,3,1,2,3,1,2,3};
		
		// l1 : 0 to arr.length-2
		// l2 : l1+1 to arr.length-1
		// sum1 : 0 to l1
		// sum2 : l1+1 to l2
		// sum3 : l2+1 < l3
		
		outer:
		for(int i=0; i<arr.length-2; i++) {
			for(int k=i+1; k<arr.length-1; k++) {
				int sum1=0, sum2=0, sum3=0;
				int l1=i, l2=k;
				
				//System.out.println("i: "+ i);
				for(int j=0; j<=l1; j++) {
					//System.out.println("j: "+ j);
					sum1 += arr[j];
				}
				for(int j=l1+1; j<=l2; j++) {
					//System.out.println("j: "+ j);
					sum2 += arr[j];
				}
				for(int j=l2+1; j<arr.length; j++) {
					//System.out.println("j: "+ j);
					sum3 += arr[j];
				}
				//System.out.println(l1 + " " + l2 + " " + 
				//sum1 + " " + sum2 + " " + sum3);
				if(sum1==sum2 && sum2==sum3) {
					System.out.println("Yes: sums "+ sum1 + " "
							+ sum2 + " " + sum3);
					for(int j=0; j<=l1; j++) {
						System.out.print(j + " ");
					}
					System.out.println();
					for(int j=l1+1; j<=l2; j++) {
						System.out.print(j + " ");
					}
					System.out.println();
					for(int j=l2+1; j<arr.length; j++) {
						System.out.print(j + " ");
					}
					System.out.println();
					break outer;
				}
			}
		}
	}
}