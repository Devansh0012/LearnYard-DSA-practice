#include <bits/stdc++.h>
using namespace std;

int main(){
    int rows,columns;
    cout<<"Enter the no. of rows: ";
    cin>>rows;
    cout<<"Enter the no. of columns: ";
    cin>>columns;
    //int serialNo = 1;
    for(int i = 1; i <= rows; i++){
        for(int j = i; j <= columns + i - 1; j++){
            cout<<j<<" "; 
        }
        cout<<endl;
    }
  return 0;
}