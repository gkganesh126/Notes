#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<vector<int> > mat = { { 1, 5, 9, 11 },
                                 { 14, 20, 21, 26 },
                                 { 30, 34, 43, 50 } };
    int i, j, elementToSearch=50;

cout<<"mat.size(): "<<mat.size()<<"\n";
cout<<"mat[0].size():"<<mat[0].size()<<"\n";
    for(i=0; i<mat.size(); i++) {
        for(j=0; j<mat[0].size(); j++) {
            cout<<mat[i][j]<<" ";
            if (mat[i][j] == elementToSearch) {
                cout<<elementToSearch<<" is present";
                goto l;
            }
        }
    }
    l: 
    cout<<"\nend";

}