#include<bits/stdc++.h>

using namespace std;

void kar() {
    extern int g;
    ++g;
}
int g;
void abc() {
    ++g;
}
void xyz() {
    ++g;
}
int main() {
    ++g;
    abc();
    xyz();
    kar();
    cout<<g;
}