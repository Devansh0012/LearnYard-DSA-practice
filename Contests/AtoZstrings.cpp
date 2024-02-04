/*
Given a string S consisting of uppercase English letters. Print the maximum length of a substring which starts with 'A' and ends with 'Z'.
A substring is a continuous sequence of characters within a string.
For example, 'low', 'ower' and 'flowe' are substrings of 'flower', whereas 'flw', 'oe' etc. are not.

Note: It is guaranteed that there always exists at least one substring starting with 'A' and ending with 'Z' in the given string.

Input Format

First line contains a string S consisting of uppercase English letters only.

Constraints

1 <= |s| <= 200,000 where |s| denotes length of the string.
'A' <= si <= 'Z', where si represents character at ith index of string s.

Output Format

Output a single integer denoting length of longest substring starting with 'A' and ending with 'Z'.

Sample Input 0

QWERTYASDFZXCV
Sample Output 0

5
Explanation 0

In the string "QWERTYASDFZXCV" the maximum length of a substring starting with 'A' and ending with 'Z' is 5, and the substring is "ASDFZ".
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    int start = -1, end = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            start = i;
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == 'Z') {
            end = i;
            break;
        }
    }
    cout << end - start + 1 << endl;
    return 0;
}