#include<iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int arr[5] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0, j=len-1; i<len/2; i++, j--) {
        swap(arr[i], arr[j]);
    }
    cout<<"rotated array is: ";
    for (int i=0; i<len; i++) {
        cout<<arr[i] << " ";
    }
    getchar();
    return 0;
}