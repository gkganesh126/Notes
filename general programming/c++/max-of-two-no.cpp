#include<bits/stdc++.h>

using namespace std;

int main() {
    int a=6, b=3, c,d,max;

    // max of two integer numbers
    c=a-b;
    d=c>>15;
    max=a+d*(a-b);
    printf("Max of two integers %d and %d: %d\n", a, b, max);

    // max of any two numbers
    float m=3.5, n=2.5; 
    float maxx = m;
    n>maxx && (maxx=n);
     printf("Max of two numbers %f and %f: %f\n", m, n, maxx);


}