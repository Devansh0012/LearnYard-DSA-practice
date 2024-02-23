#include <bits/stdc++.h> // Include the standard library header file

using namespace std; // Use the standard namespace

int main(){ // Start of the main function
    int n; // Declare an integer variable n
    cin >> n; // Take input for n from the user

    int i = 1; // Declare and initialize a loop variable i with 1

    while(i <= n){ // Start of the outer while loop, runs until i is less than or equal to n
        int j = 1; // Declare and initialize a loop variable j with 1

        while(j <= n-i){ // Start of the inner while loop, runs until j is less than or equal to n-i
            cout << " "; // Print a space
            j++; // Increment j by 1
        }

        j = 1; // Reset the value of j to 1

        while(j <= 2*i-1){ // Start of another inner while loop, runs until j is less than or equal to 2*i-1
            cout << "*"; // Print an asterisk
            j++; // Increment j by 1
        }

        cout << endl; // Move to the next line
        i++; // Increment i by 1
    }

    i = n-1; // Reset the value of i to n-1

    while(i >= 1){ // Start of another outer while loop, runs until i is greater than or equal to 1
        int j = 1; // Declare and initialize a loop variable j with 1

        while(j <= n-i){ // Start of the inner while loop, runs until j is less than or equal to n-i
            cout << " "; // Print a space
            j++; // Increment j by 1
        }

        j = 1; // Reset the value of j to 1

        while(j <= 2*i-1){ // Start of another inner while loop, runs until j is less than or equal to 2*i-1
            cout << "*"; // Print an asterisk
            j++; // Increment j by 1
        }

        cout << endl; // Move to the next line
        i--; // Decrement i by 1
    }

    return 0; // End of the main function
}