#include <bits/stdc++.h>
using namespace std;

int main() {
    int l,r;
    cin>>l>>r;
    for(int num = l; num <= r; num++){
        int sum = 0;
        for(int rem = num; rem > 0; rem /= 10){
            sum = sum + rem % 10;
        }
        cout<<"Sum of digits of the number "<<num<<"is "<<sum<<endl;
    }
}