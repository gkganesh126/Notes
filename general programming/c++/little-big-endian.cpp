#include<bits/stdc++.h>

using namespace std;

int main() {
    int iptr=5;
    char *cptr;
    cptr=(char *)&iptr;
    cout<<iptr<<" "<<cptr;

    if (*cptr==1)
        cout<<"litle endian";
    else
        cout<<"big endian";
}