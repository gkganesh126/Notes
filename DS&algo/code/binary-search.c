#include<stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
	if(r >= l) {
		int mid = l + (r-1)/2;
		if(x == arr[mid]) 
			return mid;
		if(x < arr[mid]) 
			return binarySearch(arr, l, mid-1, x);
		else
			return binarySearch(arr, mid+1, r, x);
	}
	return -1;
}

int main() {
	int arr[] = {2,4,5,6,7,8,9}, x=1;
	int n = sizeof(arr)/sizeof(arr[0]);
	int idx = binarySearch(arr, 0, n, x);	
	if (idx == -1) 
		printf("Element not found");
	else
		printf("Element found at index: %d", idx);
}
