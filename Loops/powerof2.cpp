//Check whether the given input number is power of 2 or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag = 0;

    while(n>1){
        if(n % 2 ==1){
            cout<<"Number is not a power of 2"<<endl;
            flag = 1;
            break;
        }
        n = n / 2;
    }
    if(flag == 0){
        cout<<"Number is a power of 2"<<endl;
    }
    return 0;
}

//Leetcode link: https://leetcode.com/problems/power-of-two/description/