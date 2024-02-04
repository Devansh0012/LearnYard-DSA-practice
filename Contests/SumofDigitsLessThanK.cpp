#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        int num = a[i];
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        if(sum < k){
            ans++;
        }
    }
    cout << ans << endl;
  return 0;
}