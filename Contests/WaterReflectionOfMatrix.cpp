/*
Given a N x M matrix, print the water reflection of this matrix.
The water reflection of a matrix is its reflection in the water, which shows a vertically-inverted matrix.
A vertically-inverted matrix reflects the flipped top and bottom parts, while the left and right sides remain the same.

Input Format

1st line two space-separated integers, N and M denoting the size of matrix.
For next N lines, the ith line contains M space-separated integer denoting ith row of N x M matrix.

Constraints

1 ≤ N, M ≤ 105
1 ≤ Ai,j ≤109, where Ai,j represents the element at ith and jth column of the matrix.

Output Format

Output an N x M matrix which is a water reflection of the input matrix.

Sample Input 0

4 3
1 2 3
4 5 6
7 8 9
10 11 12
Sample Output 0

10 11 12 
7 8 9 
4 5 6 
1 2 3 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}