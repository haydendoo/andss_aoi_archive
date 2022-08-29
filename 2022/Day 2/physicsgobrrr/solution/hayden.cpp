#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n,grad,tx,ty;
    bool yay=0;
    cin >> n >> grad >> tx >> ty;
    while(n--){
        ll x,y;
        cin >> x >> y;
        if(yay||x>tx) continue;
        ll dy=grad*(tx-x);
        if(y+dy==ty){
            cout << "YES\n";
            yay=1;
        }
    }
    if(!yay) cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}