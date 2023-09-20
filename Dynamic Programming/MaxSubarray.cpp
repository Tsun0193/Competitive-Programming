#include<bits/stdc++.h>
using namespace std; 

int n;
int a[100005];

signed main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> dp(n+1, 0);
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        dp[i] = max(dp[i-1] + a[i-1], a[i-1]);
    }
    cout << dp[n];
}