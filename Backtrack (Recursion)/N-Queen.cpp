#include<bits/stdc++.h>
using namespace std; 

#define int long long

int cnt = 0;
int a[11];
int n;

bool check(int i, int j) {
    //check if we can place a queen at (i, j) not attacking any other queens from 1 to i-1
    for(int k = 1; k < i; k++) {
        if(a[k] == j || abs(a[k] - j) == abs(k - i)) return false;
    }
    return true;
}

int backtrack(int i) {
    int cnt = 0;
    for(int j = 1; j <= n; j++) {
        if(check(i, j)) {
            a[i] = j;
            if(i == n) {
                cnt++;
            }
            else {
                cnt += backtrack(i+1);
            }
        }
    }
    return cnt;
}

signed main() {
    cin >> n;
    cout << backtrack(1);
    return 0;
}