#include <bits/stdc++.h>
using namespace std;

int main() {
    int l,r; //Declared the left and right most numbers
    cin>>l>>r; // took the range from the user
    for(int num = l; num <= r; num++){ //loop from l to r
        int sum = 0; // initialize sum = 0
        for(int rem = num; rem > 0; rem /= 10){ //sum of digits loop
            sum = sum + rem % 10;
        }
        cout<<"Sum of digits of the number "<<num<<"is "<<sum<<endl;
    }
}