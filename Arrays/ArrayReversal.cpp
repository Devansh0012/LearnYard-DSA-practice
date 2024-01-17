#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    cout << "Array is:\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int temp;
    for(int i=0 ; i<n/2 ; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    cout << "Reversed array is:\n";

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
  return 0;
}