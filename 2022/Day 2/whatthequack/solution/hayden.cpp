#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int q;
    cin >> q;
    while(q--){
        ll k;
        cin >> k;
        ll l=0, r=min(k,(ll)1e8);
        while(l<r){
            ll mid=(l+r)/2;
            ll val=0;
            ll x=mid;
            while(x>0){
                val+=(x*x);
                x/=2;
            }
            if(val>=k){
                r=mid;
            }
            else {
                l=mid+1;
            }
        }
        cout << l << '\n';
    }
}