#include<bits/stdc++.h>
using namespace std; 

#define MOD 1000000007
#define int long long
int n;

int fib(int n) {
    if(n <= 1) return n;
    int a = 0, b = 1, c;
    for(int i = 2; i <= n; i++) {
        c = (a % MOD + b % MOD) % MOD;
        a = b;
        b = c;
    }
    return b;
}

int a[100005];

signed main() {
    cin >> n;
    cout << fib(n);
    return 0;
}