#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,k,b;
    cin >> n >> k >> b;
    pair<ll,ll> piles[k];
    for(int i=0; i<k; ++i){
        cin >> piles[i].first;
    }
    for(int i=0; i<k; ++i){
        cin >> piles[i].second;
    }
    sort(piles,piles+k);
    ll ans=piles[0].second;
    ll l=0, sum=piles[0].second;
    for(int i=1; i<k; ++i){
        sum+=piles[i].second;
        while(piles[i].first-piles[l].first+1>b){
            sum-=piles[l].second;
            ++l;
        }
        ans=max(ans,sum);
    }
    cout << ans;
}