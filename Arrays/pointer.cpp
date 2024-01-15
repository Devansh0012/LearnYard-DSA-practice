#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10; // Declare and initialize an integer variable 'a' with the value 10
    int *ptr = &a; // Declare a pointer variable 'ptr' and assign the address of 'a' to it
    cout<<ptr<<endl; // Print the value of 'ptr', which is the address of 'a'
    cout<<*ptr<<endl; // Print the value stored at the address pointed by 'ptr', which is the value of 'a'
    cout<<&a<<endl; // Print the address of 'a'
    cout<<&ptr<<endl; // Print the address of 'ptr'
    cout<<*(&a)<<endl; // Print the value stored at the address of 'a', which is the value of 'a'
    cout<<*(&ptr)<<endl; // Print the value stored at the address of 'ptr', which is the address of 'a'
    return 0;
}