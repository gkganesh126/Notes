#include<bits/stdc++.h>

#define MAX_SIZE 5;
using namespace std;

class circularQueue {
    public:
        int arr[MAX_SIZE];
        int front, rear;
        bool isFull() {
            if(rear == (front+1)%5) {
                cout<<"queue is full";
                return true;
            }
            return false;
        }
        bool isEmpty() {
            if (front == rear) {
                cout<<"queue is empty";
                return true;
            }
            return false;
        }
};

int main() {
    circularQueue c;
    for (int i=0; i<5; i++) {
            c.arr[i] = i+1;
            c.rear = 0;
            c.front = i;
    }

}