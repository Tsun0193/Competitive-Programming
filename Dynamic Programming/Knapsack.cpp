#include<bits/stdc++.h>
using namespace std; 

int n;
int w[500005];
int v[500005];
int target;

signed main() {
    cin >> n;
    cin >> target;
    for (int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    }

    vector<int> dp(target + 1, 0);
    for(int i = 0; i < n; i++) {
        for(int j = target; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
        } 
    }
    cout << dp[target];
    return 0;
}