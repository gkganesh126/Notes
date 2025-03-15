#include<bits/stdc++.h>

using namespace std;

int main() {
    list<int> l={1,2,3,4,5};

    for(auto i : l) {
        cout<<i<<" ";
    }
    cout<<"\n";

    l.push_back(6);
    l.push_front(0);
    for(auto i:l) {
        cout<<i<<" ";
    }
    cout<<"\n";

    auto itr = l.begin();
    l.insert(itr,-1);
    for(auto i:l) {
        cout<<i<<" ";
    }
    cout<<"\n";

    itr = l.begin();
    advance(itr, 8);
    l.insert(itr, 7);
    for(auto i:l) {
        cout<<i<<" ";
    }
    cout<<"\n";

}