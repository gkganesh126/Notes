#include<bits/stdc++.h>

using namespace std;

int main() {
    int sizeOfInt = sizeof(int), decimal, quotient, remainder, i=0;
    string binary;

    cout << "Enter a decimal no. : ";
    cin >> decimal;
quotient = decimal;
    while(quotient != 1) {
        
        remainder = quotient % 2;

        //sprintf(binary, "%d", remainder);
       //binary = binary + (string)remainder;
        //binary.append(remainder);
        binary = binary + to_string(remainder);
         quotient = quotient / 2;

         cout << "quotient : "<< quotient << "\n"; 
        cout << "remainder : "<< remainder << "\n"; 
    }

    binary = binary + to_string(quotient);
    reverse(binary.begin(), binary.end());
    cout << "binary: " <<  binary <<"\n";
    
}

/*
decimal: 5
quotient : 5
quotient: 5/2 = 2 
remainder : 1

quotient: 2/2 = 1
remainder: 0
*/