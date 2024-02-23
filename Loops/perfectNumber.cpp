#include <bits/stdc++.h> // Include the standard library header file

using namespace std; // Use the standard namespace
/*
A perfect number is a positive integer that is equal to the sum of its proper divisors 
(excluding the number itself). In the given program, 
the code checks each number from 1 to n and calculates the sum of its proper divisors using the inner for loop.
 If the sum is equal to the number itself, it is considered a perfect number and 
 the program prints a message indicating that the number is a perfect number.
*/
int main(){ // Start of the main function

    int n; // Declare an integer variable n
    cin >> n; // Take input for n from the user

    for(int i = 1; i <= n; i++){ // Start of the outer for loop, iterate from 1 to n

        int sum = 0; // Declare and initialize an integer variable sum to 0

        for(int j = 1; j <= i-1; j++){ // Start of the inner for loop, iterate from 1 to i-1

            if(i % j == 0){ // Check if i is divisible by j without remainder
                sum += j; // Add j to the sum
            }
        }

        if(sum == i){ // Check if the sum is equal to i
            cout << "The number "<< i << " is a perfect number"<<endl; // Print that i is a perfect number
        }
    }

    return 0; // Return 0 to indicate successful execution
}