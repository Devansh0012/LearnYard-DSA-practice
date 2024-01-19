#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Declare and initialize a 2D array
    for(int i = 0; i < 3; i++){ // Iterate through the rows
        for(int j = 0; j < 3; j++){ // Iterate through the columns
            cout << arr[i][j] << " "; // Print each element followed by a space
        }
        cout << endl; // Print a new line
    }
    return 0;
}