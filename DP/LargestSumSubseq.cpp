#include<bits/stdc++.h>
using namespace std; 

int a[100005];
int n;
int dp[100005];

signed main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dp[0] = 0;
    for(int i = 1; i < n + 1; i++) {
        dp[i] = max(dp[i-1] + a[i-1], a[i-1]);
    }
    cout << *max_element(dp, dp + n + 1);
    return 0;
}
// Time complexity: O(n)