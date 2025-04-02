#include<bits/stdc++.h>

using namespace std;

// need to improve
void removeDuplicate(int len, char *str, vector<char> *sol) {
    for(int i=0; i<len; i++) {
        if (str[i] != str[i+1]) {
            //cout<<"str[i] " << i << " " <<str[i];
            (*sol).push_back(str[i]);
            i++;
        }else {
            i+=2;
        }
    }
}

int main() {
    //char *str="mississippi";
    char *str="careermonk";
    int i=0, len=strlen(str);
    vector<char> sol;

    removeDuplicate(len, str, &sol);
    //removeDuplicate(len, str, &sol);
    
    
    //cout<<str<< "\n";
    for(auto s : sol) {
        cout<<s<<" ";
    }
}

