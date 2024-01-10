//Check whether the given input number is power of 2 or not


#include<bits/stdc++.h> // Include the necessary header files

using namespace std;

int main(){
    int n; // Declare a variable to store the input number
    cin>>n; // Read the input number from the user
    int flag = 0; // Initialize a flag variable to check if the number is a power of 2

    while(n>1){ // Iterate until the number becomes 1
        if(n % 2 ==1){ // Check if the number is odd
            cout<<"Number is not a power of 2"<<endl; // Print a message indicating that the number is not a power of 2
            flag = 1; // Set the flag to 1 to indicate that the number is not a power of 2
            break; // Exit the loop
        }
        n = n / 2; // Divide the number by 2
    }
    if(flag == 0){ // Check if the flag is still 0
        cout<<"Number is a power of 2"<<endl; // Print a message indicating that the number is a power of 2
    }
    return 0; // Return 0 to indicate successful execution
}


//Leetcode link: https://leetcode.com/problems/power-of-two/description/