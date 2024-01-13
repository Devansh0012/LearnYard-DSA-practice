#include <bits/stdc++.h>
using namespace std;

int main(){
        int arr[5] = {1, 2, 3, 4, 5};
        int brr[5] = {5, 6, 7, 8, 9};
        for(int i = 0; i < 5; i++){
            brr[i] = arr[i];
        }
        for(int i = 0; i < 5; i++){
            cout << brr[i] << " ";
        }
        cout << endl;
    return 0;
}