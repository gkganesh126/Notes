#include<stdio.h>
//#include<conio.h>
//using namespace std;


void activitySelection(int s[], int f[], int n) {
int i=0, j;
printf("%d ",i);
for(j=1;j<n;j++) {
	if(s[j]>f[i]) {
		printf("%d ",j);
		i=j;
	}
}
}

int main() {
        int s[]={1,3,0,5,8,5},f[]={2,4,6,7,9,9}, n;
        n=sizeof(s)/sizeof(s[0]);
        activitySelection(s,f,n);
       	return 0;
}


