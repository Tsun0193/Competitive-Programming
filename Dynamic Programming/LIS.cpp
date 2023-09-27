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
    vector<int> dp;
    for(int i = 0; i < n; i++) {
        auto it = lower_bound(dp.begin(), dp.end(), a[i]); // Strictly increasing, use upper_bound for non-decreasing
        if(it == dp.end()) {
            dp.push_back(a[i]);
        } else {
            *it = a[i];
        }
    }
    return dp.size();
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
