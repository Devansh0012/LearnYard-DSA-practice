#include <bits/stdc++.h>
using namespace std;

/**
 * This program prints the first 'n' numbers whose sum of digits is equal to 'k'.
 * It takes input for 'n' and 'k' from the user and uses a while loop and nested for loop to find and print the numbers.
 */
int main(){
    int count = 0;
    int number = 1;
    int k;
    int n;
    cout<<"Enter value of n: "; //numbers to be printed
    cin>>n;
    cout<<"Enter value of k: "; //sum of digits which should be k
    cin>>k;
    while(count<n){
        int sum = 0;
        for(int rem = number; rem>0; rem /= 10){
            sum += rem%10;
        }
        if(sum == k){
            cout<<number<<endl;
            count++;
        }
        number++;
    }

}