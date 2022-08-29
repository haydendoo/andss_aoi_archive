#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    long long a[n];
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    sort(a,a+n);
    long long ans=max(0ll,a[1]-a[0])+max(0ll, a[n-2]-a[n-1]);
    for(int i=1; i<n-1; ++i) {
        ans+=max(0ll, max(a[i-1]-a[i], a[i+1]-a[i]));
    }
    cout << ans;
}