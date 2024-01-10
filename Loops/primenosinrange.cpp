#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number till which you want prime numbers: ";
    cin >> n;
    
    // Loop to iterate through numbers from 2 to n
    for(int i=2; i<=n; i++){
        bool flag = true;
        
        // Loop to check if i is divisible by any number from 2 to i-1
        for(int j=2; j<i; j++){
            if(i%j==0){
                flag = false;
                break;
            }
        }
        // If i is prime, print it
        if(flag){
            cout << i << endl;
        }
    }
    
    return 0;
}