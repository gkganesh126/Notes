#include<bits/stdc++.h>

using namespace std;

int main() {
    int i, n, sqrtOfn, flag=0;

    printf("Enter a number: ");
    scanf("%d", &n);
    sqrtOfn = sqrt(n);
    if(n==0 || n==1) {
        flag = 0;
    }else {
        for (i=2; i<=sqrtOfn; i++) {
            if (n%i==0) {
                flag =1;
                break;
            }
        }
    }
    if (flag==1) {
        printf("%d is not prime number ", n);
    }else {
        printf("%d is prime number ", n);
    }

    return 0;
}