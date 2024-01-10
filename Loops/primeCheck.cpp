#include <bits/stdc++.h>
using namespace std;

/**
 * This program checks whether a given number is prime or not.
 * It takes an integer input from the user and checks if it is divisible by any number other than 1 and itself.
 * If it is divisible, the number is not prime. Otherwise, it is prime.
 */
int main(){
    int n;
    cin >> n;
    bool isPrime = true;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << "Prime" << endl;
    }else{
        cout << "Not Prime" << endl;
    }
  return 0;
}