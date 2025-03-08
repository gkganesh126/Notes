#include<iostream>

using namespace std;

int main() {

    int data1 [5] = {2,5,1,3};
    int *ptr ;
    ptr = data1;

    for(int i=0; i<5; i++) {
        cout<< *(ptr+i)<< " " ;
    }



    getchar();
}