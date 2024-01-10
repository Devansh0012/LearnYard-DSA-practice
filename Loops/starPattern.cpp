#include <bits/stdc++.h>
using namespace std;

/**
 * The main function is the entry point of the program.
 * It prompts the user to enter a number and prints a star pattern based on the input.
 * The outer loop controls the number of rows in the pattern, and the inner loop prints the stars in each row.
 * After printing each row, a new line is added for formatting.
 *
 * @return 0 indicating successful execution of the program.
 */
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++) cout << "*";  //change j<=i to j<=n if you want to print n stars in n lines.
        cout << endl;
    }
  return 0;
}