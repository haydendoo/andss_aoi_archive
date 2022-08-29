// Alternative solution using Disjoint Set Union Find

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN=1e6+1;

ll s[mxN]={0};

struct DSU {
    int e[mxN]; DSU() { memset(e, -1, sizeof(e)); }
    int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); } 
    bool sameSet(int a, int b) { return get(a) == get(b); }
    int size(int x) { return -e[get(x)]; }
    void unite(int x, int y) { // union by size
        x = get(x), y = get(y); if (x == y) return;
        if (e[x] > e[y]) swap(x,y);
        s[x] += s[y];
        e[x] += e[y]; e[y] = x; return;
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n, e;
	cin >> n >> e;
	bool vis[n+1];
	memset(vis,0,sizeof(vis));
    for(int i=1; i<=n; ++i){ 
        cin >> s[i];
    }
	DSU dsu;
    for(int i=0; i<e; ++i){
        int a,b;
        cin >> a >> b;
        dsu.unite(a,b);
    }
    ll ans=LLONG_MIN;
    for(int i=1; i<=n; ++i){
		int leader=dsu.get(i);
        if(vis[leader]) continue;
		vis[leader]=1;
        ans=max(ans,s[leader]);
    }
    cout << ans;
}
