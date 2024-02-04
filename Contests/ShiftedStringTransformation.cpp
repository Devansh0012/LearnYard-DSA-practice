/*
Given two strings A and B consisting of lowercase English letters. Choose any integer K and determine if A can be converted into B by shifting each character to the left by K.

For example, if K is 1
- character a shifted to left by 1 is z
- character b shifted to left by 1 is a
- character c shifted to left by 1 is b
- character z shifted to left by 1 is y

For example if K is 2
- character a shifted to left by 1 is y
- character b shifted to left by 1 is z
- character c shifted to left by 1 is a
- character z shifted to left by 1 is x

Input Format

1st line of input consists of string A.
2nd line of input consists of string B.

Constraints

1 <= length of A <= 105
1 <= length of B <= 105
length of A = length of B
'a' <= Ai, Bi <= 'z', where Ai, Bi represent characters at ith index of string A and B respectively.

Output Format

Print Yes if you can convert A to B. Else print No.

Sample Input 0

a
a
Sample Output 0

Yes
Sample Input 1

learnyard
jcyplwypb
Sample Output 1

Yes
Explanation 1

l shifted to left by 2 is j
e shifter to left by 2 is c
a shifter to left by 2 is y
r shifter to left by 2 is p
n shifter to left by 2 is l
y shifter to left by 2 is w
a shifter to left by 2 is y
r shifter to left by 2 is p
d shifter to left by 2 is b

Sample Input 2

aa
bz
Sample Output 2

No
Explanation 2

There is no such K such that 'aa' can be converted to 'bz'.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    if (A.length() != B.length()) {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < 26; i++) {
        string temp = A;
        for (int j = 0; j < A.length(); j++) {
            temp[j] = (A[j] - 'a' + i) % 26 + 'a';
        }
        if (temp == B) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
