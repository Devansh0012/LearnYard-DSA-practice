#include <bits/stdc++.h>
using namespace std;

// This program calculates the highest common factor (HCF) of two numbers using the Euclidean algorithm.

int main(){
    int a, b;
    cin >> a >> b; // Input two numbers
    while(a != b){ // Continue the loop until the two numbers are equal (i.e., HCF is found)
        if(a > b)
            a -= b; // Subtract the smaller number from the larger number
        else
            b -= a; // Subtract the smaller number from the larger number
    }
    cout << a; // Output the HCF
    return 0;
}