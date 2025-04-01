#include<bits/stdc++.h>

using namespace std;

char A[3] = {'A','B','C'};
void Binary(int n) {
    if (n<1)
        printf("%s", A);
    else {
        A[n-1]=0;
        Binary(n-1);
        A[n-1]=1;
        Binary(n-1);
    }
}
int main() {
    Binary(3);
}