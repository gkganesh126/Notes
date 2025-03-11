#include<bits/stdc++.h>

using namespace std;

/*
1
2 3
4 5 6
7 8 9 10
*/

void main() {
    int i,j, N=4;
    for(i=1;i<=N; i++) {
        for (j=1; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}