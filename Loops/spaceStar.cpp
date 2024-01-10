#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Loop to print a pattern of spaces and stars
    for(int i=1; i<=n; i++){
        int space_count = i - 1;
        int star_count = n;

        // Loop to print spaces
        for(int j=1; j<=space_count; j++){
            cout << " ";
        }

        // Loop to print stars
        for(int j=1; j<=star_count; j++){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}