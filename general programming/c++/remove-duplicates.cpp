#include<bits/stdc++.h>

using namespace std;

int main() {
    // "mississippi"
    string str1 = "careermonk", str2;
    int i, len1;
    
    len1 = str1.size();
cout<<"test: "<<str1[0]<<" "<<str1[1]<<" "<<str1[0]+str1[1];
    for(i=0; i<len1; i++) {
        
        if( str1[i] != str1[i+1]) {
            str2.push_back(str1[i]);
            //str2.push_back(str1[i+1]);
            cout<<"i:"<<i<<"\nstr2: "<<str2<<"\n";
            i++;
        }
        else {
            i+=2;
        }
    }    
cout<<"\n ans: "<<str2;

}