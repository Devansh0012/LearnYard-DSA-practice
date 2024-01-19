#include <bits/stdc++.h>
using namespace std;

/**
 * @brief This program checks if a given square matrix is an upper triangular matrix.
 *        It takes the size of the matrix and the elements as input from the user.
 *        Then, it checks if all the elements below the main diagonal are zero.
 *        If all the elements below the main diagonal are zero, it is an upper triangular matrix.
 *        Otherwise, it is not an upper triangular matrix.
 * 
 * @return int Returns 0 to indicate successful execution of the program.
 */
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
    bool flag = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i>j && arr[i][j]!=0){
                flag = false;
                break;
            }
        }
    }
    if(flag) cout << "Upper triangular matrix" << endl;
    else cout << "Not an upper triangular matrix" << endl;
    return 0;
}