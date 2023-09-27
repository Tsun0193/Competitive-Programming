#include<bits/stdc++.h>
using namespace std; 

#define MOD 1000000007
#define int long long
int n;

//O(n^2)
int Catalan(int n) {
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i <= n; i++) {
        dp[i] = 0;
        for(int j = 0; j < i; j++) {
            dp[i] += ((dp[j] % MOD) * (dp[i - j - 1] % MOD)) % MOD;
        }
    }
    return dp[n];
}

//O(n) with inverse modulo
int Catalan2(int n) {
    
}


signed main() {
    cin >> n;
    cout << Catalan(n);
    return 0;
}