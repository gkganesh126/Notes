#include<bits/stdc++.h>

using namespace std;

bool isSubset(vector<int>a, vector<int> b) {
    set<int> mp(a.begin(), a.end());

    for(int i: b) {
        if(mp.find(i) == mp.end()) {
            return false;
        }
    }
    return true;

}
int main() {
    vector<int> a ={1,2,3,4,5};
    vector<int> b ={2,3};

    if( isSubset(a,b) ) {
        cout<<"is subset";
    }else {
        cout<<"not subset";
    }
}