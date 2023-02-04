// Solution for the 5000 point subtask

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

struct Line {
	mutable ld k, m, p;
	bool operator<(const Line& o) const { return k < o.k; }
	bool operator<(ld x) const { return p < x; }
};

struct LineContainer : multiset<Line, less<>> {
	// (for doubles, use inf = 1/.0, div(a,b) = a/b)
	ld inf = 1/.0;
	ld div(ld a, ld b) { // floored division
		return a/b; }
	bool isect(iterator x, iterator y) {
		if (y == end()) return x->p = inf, 0;
		if (x->k == y->k) x->p = x->m > y->m ? inf : -inf;
		else x->p = div(y->m - x->m, x->k - y->k);
		return x->p >= y->p;
	}
	void add(ld k, ld m) {
		auto z = insert({k, m, 0}), y = z++, x = y;
		while (isect(y, z)) z = erase(z);
		if (x != begin() && isect(--x, y)) isect(x, y = erase(y));
		while ((y = x) != begin() && (--x)->p >= y->p)
			isect(x, erase(y));
	}
	ld query(ld x) {
		auto l = *lower_bound(x);
		return l.k * x + l.m;
	}
};

int main(){
    int n,K;
    cin >> n >> K;
    ld k=K;
    ll e[n];
    ll dp[n]; LineContainer lc;
    for(int i=0; i<n; ++i) {
        cin >> e[i]; dp[i]=e[i];
    }
    ld temp=dp[0];
    lc.add(0,temp);
    ll ans=max(0ll,e[0]);
    for(ll i=1; i<n; ++i){
        ld temp=e[i];
	ld idx=i;
	temp+=(idx*idx)/k; 
	dp[i] = max(dp[i],static_cast<ll>(floor(temp+lc.query(idx)+0.00001)));
	ans=max(ans,dp[i]); 
	ld lol=dp[i];
	lc.add(-2.0*idx/k,lol+(idx*idx)/k);
    }
    cout << ans;
} 
