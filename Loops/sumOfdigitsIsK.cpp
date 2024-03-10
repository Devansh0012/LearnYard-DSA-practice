//Given a value N, print only those numbers from 1 to N that have sum of digits equal to k.

#include <bits/stdc++.h>
using namespace std;

// This is the starting point of the program execution.
int main() {
    // Declare variables to store the input values.
    int n, k;
    // Read the values of n and k from the user.
    cin>>n>>k;

    // Iterate through numbers from 1 to n.
    for (int num = 1; num <= n; num++)
    {
        // Initialize a variable to store the sum of digits of the current number.
        int sum = 0;
        // Extract each digit of the current number and add it to the sum.
        for (int rem = num; rem > 0; rem /= 10)
        {
            sum = sum + rem % 10;
        }
        // Check if the sum of digits is equal to k.
        if (sum == k)
        {
            // Print the number and its sum of digits.
            cout<<"The number "<<num<<" has its sum of digits equal to "<<k<<endl;
        }
    }
}
