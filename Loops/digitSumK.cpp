#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int number = 1;
    int k;
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Enter value of k: ";
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