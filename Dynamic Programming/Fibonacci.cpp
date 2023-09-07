#include<bits/stdc++.h>
using namespace std; 

int n;

int fib1(int n) {
    if(n <= 1) return n;
    return fib1(n - 1) + fib1(n - 2);
}
//Recursive solution: O(2^n)

int fib21(int n) {
    int a[n+2];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i <= n; i++) {
        a[i] = a[i-1] + a[i-2];
    }
    return a[n];
}
//Dynamic programming solution: O(n) - Bottom-up Approach

int fib22(int n) {
    if(n <= 1) return n;
    int a = 0, b = 1, c;
    for(int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
//Dynamic programming solution: O(n) - Bottom-up Approach without memoization

int a[100005];

int fib3(int n) {
    if(n <= 1) return n;
    if(a[n]) return a[n];
    a[n] = fib3(n - 1) + fib3(n - 2);
    return a[n];
}
//Dynamic programming solution: O(n) - Top-down Approach with memoization

int fib4(int n) {
    auto binpow = [](double a, int b) {
        double res = 1.0;
        while (b) {
            if (b & 1)
                res = res * a;
            a *= a;
            b >>= 1;
        }
        return res;
    };

    return round(binpow((1 + sqrt(5)) / 2, n) / sqrt(5));
}
//Mathematical solution: O(log(n)) - Golden ration formula

signed main() {
    cin >> n;
    cout << fib4(n);
    return 0;
}