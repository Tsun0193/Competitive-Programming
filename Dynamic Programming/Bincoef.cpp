#include<bits/stdc++.h>
using namespace std; 

#define MOD 1000000007
#define int long long
int n, k;

int nCr(int n, int k) {
    int dp[n + 1][k + 1];
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= min(i, k); j++) {
            if(j == 0 || j == i || i == 0) dp[i][j] = 1;
            else dp[i][j] = (dp[i - 1][j - 1] % MOD + dp[i - 1][j] % MOD) % MOD;
        }
    }
    return dp[n][k];
}

signed main() {
    cin >> k >> n;
    cout << nCr(n, k);
    return 0;
}