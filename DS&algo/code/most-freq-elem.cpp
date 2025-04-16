#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> vec = {1,2,2,3,3,3,4,5};
    map<int, int> mp;
    for(int v : vec) {
        mp[v]++;
    }
     vector<int> elem;
    vector <int> cnt;
    for(auto a : mp) {
       
        elem.insert(elem.begin(), a.first);
        cnt.insert(cnt.begin(), a.second);
    }
    cout<<"\nelem: ";
    for(auto e: elem) {
        cout<<e <<" ";
    }
    cout<<"\ncnt:";
    for(auto c : cnt) {
        cout<<c<<" ";
    }
    int max=0, i=0;
    for(int c : cnt) {
        if(c>max) {
            max=c;
            i++;
        }
    }
    cout<<"Maximum repeated elem is "<<elem[i] << " with count "<<max;
}