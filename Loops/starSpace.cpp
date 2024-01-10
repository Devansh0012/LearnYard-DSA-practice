#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Loop to print the pattern
    for(int i=1; i<=n; i++){
        // Loop to print spaces before the stars
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }

        // Loop to print the stars
        for(int j=1; j<=i; j++){
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}