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
    cout << "Subarrays are:\n";
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            for(int k=i ; k<=j ; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
  return 0;
}