#include<bits/stdc++.h>

using namespace std;

void Print(int i) {
    cout<<i<<" \n";
    i++;
    if (i<=100)
        Print(i);

}

int main() {
    int i=1;
    Print(i);
}

