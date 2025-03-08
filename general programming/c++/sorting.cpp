#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
//#include</usr/include/c++/7/bits/stl_algo.h>

using namespace std;

int main() {
    int a[] = {5,4,8,2,8,1,4};
    int n = sizeof(a) / sizeof(a[0]);

printf("n: %d", n);

//sort
     sort(a,a+n);
    printf("hai\n");
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

//binary_search
    printf("isElementFound: %d", binary_search(a, a+n, 8));

//pair
    pair<int, string> p(1, "abc");
    pair<int, string> p1;
    p1 = make_pair(2, "def");
    cout<<endl << p.first<< " "<< p.second;

//vector
    vector<int> v;
    v.push_back(5);
    for(auto i=v.begin(); i!=v.end(); i++) 
        cout<<endl<<*i<<endl;

    for(int i=0;i<5;i++) {
        v.push_back(i);
    }
    cout<<endl;
    for(int i=0;i<v.size();i++) {
        cout << " " << v[i];
    }   
        
         getchar();
}