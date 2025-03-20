// Online C++ compiler to run C++ program online
#include <iostream>
#include<thread>
#include <unistd.h>

using namespace std;

void print(int start, int end) {
    for(int i=start; i<=end; i++) {
        cout<<i<<"\n";
    }
    sleep(50);
}

int main() {
    // Write C++ code here
   // std::cout << "Try programiz.pro";
    thread th1(print, 1, 20);
    thread th2(print, 21, 40);
    thread th3(print, 31, 60);
    thread th4(print, 61, 80);
    thread th5(print, 81, 100);
    
    th1.join();
    th2.join();
    th3.join();
    th4.join();
    th5.join();
    
    return 0;
}