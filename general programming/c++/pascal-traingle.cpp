#include<bits/stdc++.h>

using namespace std;

/*
                1
            1       1
        1       2       1    
    1       3       3       1
1       4       6       4       1

                1C0
            2C0     2C1
        3C0     3C1     3C2
*/
int fact(int k) {
    if (k<=1)
        return 1;
    return k * fact(k-1);
}
int Combination(int m, int n) {
    /*
    printf("fact(m): %d ", fact(m));
    printf("fact(m-n): %d ", fact(m-n));
    printf("fact(n): %d ", fact(n));
*/
    return fact(m)/(fact(m-n)*fact(n));
}
int main() {
    int i, in, s, n=5;

    for(i=0; i<=n; i++) {
        s=1;
        while(s<n-i+1) {
            printf("  ");
            s++;
        }
        in=0;
        while(in<=i) {
            //printf("%d C %d\t", i, in);
            printf("%d\t", Combination(i,in));
            in=in+1;
        }

        printf("\n");

    }


    return 0;
}