#include<iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int arr[5], int len) {
    for (int i=0; i<len; i++) {
        cout<<arr[i] << " ";
    }
}
int main() {
    int arr[5] = {5,4,6,3,7};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<len-1; i++) {
        for(int j=i+1; j<len; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    printArray(arr, len);
    
    getchar();
    return 0;
}