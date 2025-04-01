#include<bits/stdc++.h>

using namespace std;

void towersOfHanoi(int n, char frompeg, char topeg, char auxpeg) {
    if(n==1) {
        cout<<"Move disk 1 from peg "<<frompeg<<" to peg "<<topeg<<"\n";
        return;
    }
    towersOfHanoi(n-1, frompeg, auxpeg, topeg);

    cout<<"Move disk " << n << " from peg "<<frompeg<<" to peg "<<topeg<<"\n";

    towersOfHanoi(n-1, auxpeg, topeg, frompeg);
}
int main() {
    towersOfHanoi(4, 'A', 'B', 'C');
}
/*
Move disk 1 from peg A to peg B
Move disk 2 from peg A to peg C
Move disk 1 from peg B to peg C
Move disk 3 from peg A to peg B
Move disk 1 from peg C to peg A
Move disk 2 from peg C to peg B
Move disk 1 from peg A to peg B
*/