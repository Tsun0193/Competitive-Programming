#include<bits/stdc++.h>
using namespace std; 

string a;
string b;

int LCS_1(string a, string b) {
    int dp[a.size() + 1][b.size() + 1];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= a.size(); i++) {
        for(int j = 1; j <= b.size(); j++) {
            if(a[i-1] == b[j-1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[a.size()][b.size()];
}
//DP Approach: O(mn)

int LCS_2(int m, int n) {
    if(m * n == 0) return 0;
    if(a[m] == b[n]) {
        return 1 + LCS_2(m - 1, n - 1);
    }
    else {
        return max(LCS_2(m - 1, n), LCS_2(m, n - 1));
    }
}
//Recursive Approach: O(mn)

signed main() {
    cin >> a >> b;
    cout << LCS_1(a,b);
    return 0;
}