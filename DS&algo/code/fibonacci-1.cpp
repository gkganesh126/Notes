#include<bits/stdc++.h>

using namespace std;

int main() {
    int a=0, b=1, c, n=3;
    for(int i=0; i<n; i++) {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<n<<" th fibonacci number is : "<<c;
}
/*
a 0
b 1
c 1

a 1
b 1
c 2

a 1
b 2
c 3
*/