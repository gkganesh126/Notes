#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};
    for(int i=0; i<v.size(); i++) {
            cout<<v[i]<< " ";
    }
    cout<<"\n";
    for(int i=0; i<v.size(); i++) {
        cout<<v.at(i)<< " ";
    }
    cout<<"\n";
    v.push_back(6);
    // v.push_front(0); vector doesn't have push_front since this is a dynamic array
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<< " ";
    }
    cout<<"\n";
    v.push_back(6);
    v.erase(find(v.begin(), v.end(), 3)); // remove element 3
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<< " ";
    }
    cout<<"\n";
    v.erase(find(v.begin(), v.end(), 6)); // remove first occurence
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    v.erase(v.begin()+3);
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    sort(v.begin(), v.end(), greater<>()); //sort in reverse order
    cout<<"\n";
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    reverse(v.begin(), v.end());
    cout<<"\n";
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    sort(v.begin(), v.end(), greater<>());
    cout<<"\n";
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    sort(v.begin(), v.end()); //sort in ascending order
    cout<<"\n";
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
}