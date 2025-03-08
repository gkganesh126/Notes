#include<iostream>

using namespace std;

int main() {
    int arr[5] ={1,2,3,4,5};
    int elementToSearch = 6;
    bool flag = false;

    for (int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++) {
        if (arr[i] == elementToSearch ) {
            flag = true;
            break;
        }
    }
    if(flag) {
        cout<<"Element "<<elementToSearch << " is found";
    }else {
        cout<<"Element "<<elementToSearch << " is not found";
    }

    getchar();
    return 0;
}