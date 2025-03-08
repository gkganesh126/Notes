#include<iostream>

using namespace std;

void printArray(int arr[5])
{
    cout<< "Size of Array in Functions:\n"<< sizeof(arr);
    cout<< "Array Elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}

int* functionn() {
    static int arr[5] = {1,5,3,6,4};
    return arr;
}

int main() {  
    int data[10] = {1,5,3,6,4};
    int n = sizeof(data)/sizeof(data[0]);
    cout<< "n: " << n << endl
        << "sizeof(data): "<< sizeof(data) << endl
        << "sizeof(data[0]: " << sizeof(data[0]) <<endl ;
    for(int i=0; i<n; i++) {
        cout<< data[i] << " ";
    }
    cout<< endl<<endl;


    int arr[5] = { 10, 20, 30, 40, 50 };
    cout<<"Size of Array in main(): "<< sizeof(arr);
    printArray(arr);
   
    cout<< endl<<endl;

    int *data1;
    data1 = functionn();
    for (int i = 0; i < 5; i++) {
        cout<< data1[i] << " ";
    }
    getchar();
}