#include<bits/stdc++.h>
using namespace std; 

#define int long long
#define maxn 100005

int n,m;
int a[2*maxn];
int l[2*maxn];
int r[2*maxn];

void input() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> l[i] >> r[i];
    }
    return;
}

void solve1() {
    for(int i = 0; i < m; i++) {
        int sum = 0;
        for(int j=l[i];j<=r[i];j++) {
            sum += a[j];
        }
        cout << sum << "\n";
    }
    return;
}
//Brute Force: O(n*m)

void solve2() {
    int prefix[n+1];
    prefix[0] = 0;
    for(int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + a[i];
    }
    for(int i = 0; i < m; i++) {
        cout << prefix[r[i] + 1] - prefix[l[i]] << "\n";
    }
    return;
}
//Prefix Sum: O(n+m) - DP approach

void output() {
    cout << "\n";
    return;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    input();
    solve1();
    output();
    solve2();
    output();
    return 0;
}