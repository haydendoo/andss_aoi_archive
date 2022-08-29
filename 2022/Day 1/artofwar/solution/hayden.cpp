#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x,n;
    cin >> x >> n;
    bool s=0;
    for(int i=1; i<=n; ++i){
        long long city;
        cin >> city;
        if(x*3>=city){
            x-=((city/3));
            if(city%3!=0) --x;
        }
        else {
            if(i==1) cout << "You are a loser";
            else cout << i-1;
            s=1;
            break;
        }
    }
    if(!s) cout << n;
}