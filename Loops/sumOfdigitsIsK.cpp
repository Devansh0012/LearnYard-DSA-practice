//Given a value N, print only those numbers from 1 to N that have sum of digits equal to k.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;

    for (int num = 1; num <= n; num++)
    {
        int sum = 0;
        for (int rem = num; rem > 0; rem /= 10)
        {
            sum = sum + rem % 10;
        }
        if (sum == k)
        {
            cout<<"The number "<<num<<" has its sum of digits equal to "<<k<<endl;
        }
    }
    
}
