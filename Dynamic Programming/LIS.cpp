#include<bits/stdc++.h>
using namespace std; 

int n;

int LIS1(vector<int> &a) {
    vector<int> dp(n, 1);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[j] < a[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}
// Time complexity: O(n^2)

int LIS2(vector<int> &a) {
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = INT_MIN;
    for(int i = 0; i < n; i++) {
        int j = upper_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
        if(dp[j - 1] < a[i] && a[i] < dp[j]) {
            dp[j] = a[i];
        }
    }
    int ans = 0;
    for(int i = 0; i <= n; i++) {
        if(dp[i] != INT_MAX) {
            ans = i;
        }
    }
    return ans;
}

signed main() {
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << LIS1(a) << "\n";
    cout << LIS2(a);
    return 0;
}
