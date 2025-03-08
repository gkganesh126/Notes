#include<stdio.h>
using namespace std;
int main() {
	int a=10;
	int &r1=a;
	int &r2=a;
	++a;
	++r1;
	++r2;
	printf("%d %d %d", a, r1, r2);
	return 0;
}
