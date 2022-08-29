#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,k;
    cin >> n >> k;
    if(n==0){
        cout << 0;
        return 0;
    }
    long long tmp=n%k;
    if(tmp==0){
        cout << 0;
        return 0;
    }
    cout << k-tmp;
    return 0;
}