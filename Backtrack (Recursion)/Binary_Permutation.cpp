#include<bits/stdc++.h>
using namespace std; 

int n;
int a[11];
bool check[10];

void show() {
    for(int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << "\n";
    return;
}

void backtrack(int i) {
    if(i==n) {
        show();
    }
    else {
        a[i+1] = 0;
        backtrack(i+1);
        a[i+1] = 1;
        backtrack(i+1);
    }
    return;
}

signed main() {
    cin >> n;
    memset(a, 0, sizeof(a));
    memset(check, false, sizeof(check));
    backtrack(0);
    return 0;
}