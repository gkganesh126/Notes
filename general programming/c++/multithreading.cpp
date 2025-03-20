#include<bits/stdc++.h>

using namespace std;

//compile with: g++ multithreading.cpp -lpthread

void abc(int start, int stop) {
    for(int i=start; i<=stop; i++) {
        cout<<i<<endl;
    }
}
int main() {
    thread th1(abc, 1, 10);
    thread th2(abc, 11, 20);
    thread th3(abc, 21, 30);

    th1.join();
    th2.join();
    th3.join();
}