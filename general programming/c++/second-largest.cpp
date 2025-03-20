// Online C++ compiler to run C++ program online
//#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    
    // 12, 35, 60, 1, 10, 34, 1, 2, 60, 3, 5, 15, 20
    // 12 35 60 1 10 34 1 2 60 3 5 15 20
    int num[13], max, newNum[13];
    
    cout<<"enter nums: ";
    for(int i=0; i<12; i++) {
         cin>>num[i]; 
    }
    
    map<int, int> mp;
    for(int i=0; i<12; i++) {
         mp[num[i]]++;
    }
    int i=0;
    for(auto m : mp) {
        cout<<m.first << " " << m.second<<"\n";
        newNum[i] = m.first;
        i++;
    }
    cout<<"\n";
    
    /*
    for(int i=0; i<12; i++) {
         cout<<newNum[i]<<" ";
    }
    cout<<"\n";
    cout<<"second largest num" << newNum[10];
    */


    return 0;
}