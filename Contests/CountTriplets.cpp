/*
Count Triplets
Given an array of integers Arr of length N. Print the count of the triplets which form a non-degenerate
triangle and satisfy the below conditions:
- Arr , Arr , Arr are pairwise distinct.
- i < j < k. (where i, j and k are indices of the array)
Note - A non-degenerate triangle is a triangle that has a positive area.
Input Format
1 line consists of N, which denotes the size of array.
2 line consists of N space-separated integers denoting the elements of the array.
Constraints
1 <= N <= 100
1 <= Arr <= 10 , where Arr represents the element at i index of the array.
Output Format
Output should be a single integer, denoting the count of triplets which form a non-degenerate triangle.
Sample Input 0
5
5 5 10 8 6
Sample Output 0
7
Explanation 0
The triplets that satisfy the conditions are:
1. (5, 10, 8)
2. (5, 8, 6)
3. (5, 10, 8)
4. (5, 10, 6)
5. (10, 8, 6)
6. (5, 10, 6)
7. (5, 10, 6)
Sample Input 1
i j k
st
nd
i
9
i
th
2/2
4
2 1 4 5
Sample Output 1
1
Explanation 1
There is only 1 triplet which satisfies the conditions:
1. (2, 4, 5)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] > arr[k] && arr[i] != arr[j] && arr[j] != arr[k] && arr[i] != arr[k])
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
