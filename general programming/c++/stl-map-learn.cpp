#include<bits/stdc++.h>

using namespace std;

int main() {
    map <int, string> m = {{1,"abc"}, {2, "def"}, {3, "ghi"}};

    for(auto& i: m) {
        cout<<i.first<<" "<<i.second<<"\n";
    }

    m.insert({4, "jkl"});
    for(auto& i: m) {
        cout<<i.first<<" "<<i.second<<"\n";
    }

    cout<<m[1]<<" "<<m.at(1);

    m.erase(2);
    for(auto& i: m) {
        cout<<i.first<<" "<<i.second<<"\n";
    }

}