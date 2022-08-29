#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN=1e6+1;

vector<int> adj[mxN];
bool vis[mxN]={0};
ll s[mxN]={0};
ll curr;

void dfs(int index){
    if(vis[index]) return;
    vis[index]=1;
    curr+=s[index];
    for(auto it: adj[index]){
        if(vis[it]) continue;
        dfs(it);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, e;
    cin >> n >> e;
    for(int i=1; i<=n; ++i){ 
        cin >> s[i];
    }
    for(int i=0; i<e; ++i){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ll ans=LLONG_MIN;
    for(int i=1; i<=n; ++i){
        if(vis[i]) continue;
        curr=0;
        dfs(i);
        ans=max(ans,curr);
    }
    cout << ans;
}