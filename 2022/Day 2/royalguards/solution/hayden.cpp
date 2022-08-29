#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n,k;
    cin >> n >> k;
    ll e[n];
    ll dp[n];
    for(int i=0; i<n; ++i) {
        cin >> e[i]; dp[i]=e[i];
    }
    ll ans=max(0ll,e[0]);
    for(ll i=1; i<n; ++i){
        for(ll j=0; j<i; ++j){
            dp[i]=max(dp[i], dp[j]+(ll)(((i-j)*(i-j))/k) + e[i]);
            ans=max(ans,dp[i]);
        }
    }
    cout << ans;
}