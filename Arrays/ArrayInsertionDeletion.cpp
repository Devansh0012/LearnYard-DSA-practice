#include <bits/stdc++.h>
using namespace std;

int arr[10]; // Declare an array of size 10 to store elements
int size = 0; // Initialize the size of the array to 0

void insert(int data) { // Function to insert an element into the array
    if(size == 10) { // Check if the array is already full
        cout << "Array is full" << endl; // Print an error message
        return; // Exit the function
    }
    arr[size] = data; // Insert the element at the next available index
    size++; // Increment the size of the array
}

bool deleteElement(int &data, int index) { // Function to delete an element from the array
    if(index >= size) { // Check if the index is out of bounds
        cout << "Index out of bound" << endl; // Print an error message
        return false; // Return false to indicate failure
    }
    data = arr[index]; // Store the value of the element to be deleted
    for(int i = index; i < size - 1; i++) { // Shift the elements to the left
        arr[i] = arr[i + 1];
    }
    size--; // Decrement the size of the array
    return true; // Return true to indicate success
}

void print() { // Function to print the elements of the array
    for(int i = 0; i < size; i++) { // Iterate through the array
        cout << arr[i] << " "; // Print each element followed by a space
    }
    cout << endl; // Print a new line
}

int main() { // Main function
    insert(1); // Insert elements into the array
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    insert(10);
    insert(11); // This will exceed the array size and trigger an error
    print(); // Print the elements of the array
    int data; // Declare a variable to store the deleted element
    deleteElement(data, 5); // Delete the element at index 5
    cout << data << endl; // Print the deleted element
    print(); // Print the updated elements of the array
    return 0; // Exit the program
}