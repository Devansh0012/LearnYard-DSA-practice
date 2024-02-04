/*
Given an integer array of size N. You are allowed to perform the below operation only if all the array elements are even.

Replace each element X of the array by X/2.
Print the maximum number of operations you can perform on an array.

Input Format

1st line contains a single integer N which denotes the size of the array.
2nd line contains N space-separated integers denoting the elements of the array.

Constraints

1 ≤ N ≤ 105
1 ≤ Ai ≤ 109, where Ai represents element at ith index of the array.

Output Format

Print the maximum number of operations that can be performed on the array.

Sample Input 0

3
8 12 40
Sample Output 0

2
Explanation 0

Initially, the array is [8, 12, 40]. Since all those integers are even, we can perform the operation.

After the operation is performed once, the array will become [4, 6, 20]. Since all these elements are again even, we can perform the operation yet another time.

After the operation is performed twice, the array will become [2, 3, 10]. Now, there is an odd number i.e. 3 in the array, we cannot perform the operation any more.

Thus, we can perform the operation at most twice.

Sample Input 1

4
5 6 8 10
Sample Output 1

0
Explanation 1

Since there is an odd number 5 in the array, we cannot perform the operation at all.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int count = 0;
    while (all_of(A.begin(), A.end(), [](int x) { return x % 2 == 0; })) {
        for (int i = 0; i < n; i++) {
            A[i] /= 2;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}
