#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin >> a >> b;
    int n=a.length();
    for(int i=0; i<n; ++i){
        if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='u'){
            cout << a; 
            return 0;
        }
        else if(b[i]=='a'||b[i]=='e'||b[i]=='o'||b[i]=='u'){
            cout << b; 
            return 0;
        }
    }
}