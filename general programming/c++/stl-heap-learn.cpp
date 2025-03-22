#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr = {5,4,6,3,6};

    for(int i=0; i<arr.size(); i++) {
            cout<<arr[i]<<" ";
    }
    cout<<"\n";
    make_heap(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    } 

    cout<<"\n";
    sort_heap(arr.begin(), arr.end());
    for(auto x : arr) {
        cout<<x<<" ";
    }
}