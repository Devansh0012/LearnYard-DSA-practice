#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int max_element = arr[0];
    int min_element = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max_element){
            max_element = arr[i];
        }
        if(arr[i] < min_element){
            min_element = arr[i];
        }
    }
    cout<<"Range of array is: "<<max_element - min_element<<endl;
    return 0;
}