#include <bits/stdc++.h>  // Include the standard library header file

using namespace std;  // Use the standard namespace

int main(){  // Main function, the entry point of the program

    int n;  // Declare an integer variable 'n'
    cout<<"Enter size of array: ";  // Prompt the user to enter the size of the array
    cin >> n;  // Read the value entered by the user and store it in 'n'

    int * const arr = new int[n];  // Dynamically allocate an array of integers of size 'n' and assign it to a constant pointer 'arr'

    cout<<"Enter the elements of the array: "<<endl;  // Prompt the user to enter the elements of the array
    for(int i = 0; i < n; i++){  // Iterate from 0 to 'n-1'
        cin >> arr[i];  // Read the element entered by the user and store it in the array at index 'i'
    }

    cout<<"The elements are: "<<endl;  // Print a message indicating that the elements of the array will be displayed
    for(int i = 0; i < n; i++){  // Iterate from 0 to 'n-1'
        cout << arr[i]<<endl;  // Print the element of the array at index 'i'
    }

    int min = arr[0];  // Initialize a variable 'min' with the first element of the array
    for(int i = 1; i < n; i++){  // Iterate from 1 to 'n-1'
        if(arr[i] < min){  // Check if the element at index 'i' is smaller than 'min'
            min = arr[i];  // If yes, update 'min' with the new smallest element
        }
    }

    cout<<"The smallest element is: "<<min<<endl;  // Print the smallest element of the array

    delete [] arr;  // Deallocate the dynamically allocated memory for the array

    return 0;  // Return 0 to indicate successful program execution
}