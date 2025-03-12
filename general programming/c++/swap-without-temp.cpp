#include<bits/stdc++.h>

using namespace std;

int main() {
    int a=2, b=3;

    cout<<"before swapping: "<<a << " "<<b;    
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping: "<<a << " "<<b;
}