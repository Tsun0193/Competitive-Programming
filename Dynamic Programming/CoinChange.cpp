#include<bits/stdc++.h>
using namespace std; 

int n;
int s;
int a[100005];

signed main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> dp(s + 1, 1e9 + 19);
    dp[0] = 0;
    for(int i = 1; i <= s; i++) {
        for(int j = 0; j < n; j++) {
            if(i >= a[j]) {
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
            }
        }
    }
    cout << dp[s];
}