#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    long long ans=0, currtime=0, tmp=0;
    for(long long i=0; i<n; ++i){
        int t;
        cin >> t;
        long long tmp=i*1440;
        for(int j=0; j<t; ++j){
            long long s,e;
            cin >> s >> e;
            s+=tmp; e+=tmp;
            ans=max(ans, s-currtime);
            currtime=e+1;
        }
    }
    cout << max(ans, 1440*n-currtime);
}