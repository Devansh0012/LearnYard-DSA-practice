#include <bits/stdc++.h>
using namespace std;

int main(){
    int rows,columns;
    cout<<"Enter the no. of rows: ";
    cin>>rows;
    cout<<"Enter the no. of columns: ";
    cin>>columns;
    for(int i = 1; i <= rows; i++){
        for(int j = i; j <= columns + i - 1; j++){
            cout<<j<<" "; 
        }
        cout<<endl;
    }
  return 0;
}


/*
Another approach:
We can use a single loop to print this  pattern.
for(int i = 1; i <= rows*columns; i++){
    cout<<i<<" ";
    if(i%columns == 0){
        cout<<endl;
    }
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    for(int i = 1; i<=rows;i++){
        for(int j = 1; j<=columns;j++){
            cout<<i+j-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/