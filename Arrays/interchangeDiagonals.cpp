#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    // Create an empty vector and add elements to it    
    int arr[n][n];
    cout << "Enter elements of array: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin >> arr[i][j];
    }
    cout << "Original array: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
    for(int i=0; i<n; i++){
        int temp = arr[i][i];
        arr[i][i] = arr[i][n-i-1];
        arr[i][n-i-1] = temp;
    }
    cout << "Array after interchanging diagonals: " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
  return 0;
}