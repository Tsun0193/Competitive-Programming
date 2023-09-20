#include<bits/stdc++.h>
using namespace std; 


#define int 				long long
#define fi 					first
#define se  				second
#define mod 				1000000007
#define maxn    			100045
#define base 				31
#define pii     			pair<int,int>
#define tiii				tuple<int,int,int>
#define mp(x,y)				make_pair(x,y)
#define mt(x,y,z)			make_tuple(x,y,z)
#define pi     				3.141592654
#define inf     			9223372036854775807
#define pb      			push_back
#define eb 					emplace_back
#define ppb					pop_back
#define all(x)  			x.begin(),x.end()
#define lbnd    			lower_bound
#define ubnd    			upper_bound
#define sz(x)   			(ll)x.size()
#define sum(x)  			accumulate(x.begin(),x.end(),0ll)
#define each(ele,pool) 		for(auto&& ele:pool)
#define outfi(x,bfer)		fixed << setprecision(bfer) << (x)
#define binxp(x)			__builtin_ctz((long long)x)
#define rep(i, begin, end) 	for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define cyc_shift(vec,k)	rotate(vec.begin(), vec.begin() + k, vec.end());


void IO(){
    freopen("input.INP","r",stdin);
    freopen("output.OUT","w",stdout);
    return;
}

int n, k;
int dp[maxn];

void IOS(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//	system("Color F1");
    return;
}


void input(){
    cin >> n >> k;
    return;
}

void solve(){
    int dp[k+1][n+1];
    memset(dp,0,sizeof(dp));
    int i = 0;
    while (dp[i][n] < k) {
        i++;
        for (int j = 1; j <= n; j++) {
            dp[i][j] = 1 + dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }
    cout << i;
    return;
}

void output(){
    return;
}

signed main() {
    // #ifndef ONLINE_JUDGE
    //     IO();
    // #endif
    IOS();
    // int q;
    // cin >> q;
    // for(int az=0;az<q;az++){
        input();
        solve();
        output();
    // }
    return 0;
}