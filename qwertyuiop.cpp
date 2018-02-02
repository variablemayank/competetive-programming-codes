#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef long long ll;
 
template <class T>
class stmin {
	T *st;
	void STBuild(int v, int tl, int tr, const vector<T> &a) {
		if (tl == tr - 1) {
			if (tl < a.size()) st[v] = a[tl];
			else st[v] = neutral;
			return;
		}
		int mid = (tl + tr) / 2;
		STBuild(v * 2 + 1, tl, mid, a);
		STBuild(v * 2 + 2, mid, tr, a);
		st[v] = min(st[v * 2 + 1], st[v * 2 + 2]);
	}
	T STMin(int v, int tl, int tr, int l, int r) {
		if (tl >= r || tr <= l) return neutral;
		if (l <= tl && r >= tr) return st[v];
		int mid = (tl + tr) / 2;
		return min(STMin(v * 2 + 1, tl, mid, l, r),
			STMin(v * 2 + 2, mid, tr, l, r));
	}
	void STUpdate(int v, int tl, int tr, int pos, T val) {
		if (tl == tr - 1) {
			st[v] = val;
			return;
		}
		int mid = (tl + tr) / 2;
		if (pos >= mid) STUpdate(v * 2 + 2, mid, tr, pos, val);
		else STUpdate(v * 2 + 1, tl, mid, pos, val);
		st[v] = min(st[v * 2 + 1], st[v * 2 + 2]);
	}
	int sz;
	T neutral;
public:
	stmin(T min_neutral) {
		neutral = min_neutral;
	}
	void build(const vector<T> &a) {
		sz = 1;
		while (sz < a.size()) sz <<= 1;
		st = new T[sz * 2];
		for (int i = 0; i < sz * 2; i++) st[i] = neutral;
		STBuild(0, 0, sz, a);
	}
	void setinf(T inf) {
		neutral = inf;
	}
	T minimum(int l, int r) {
		return STMin(0, 0, sz, l, r + 1);
	}
	void update(int pos, T val) {
		STUpdate(0, 0, sz, pos, val);
	}
};
 
int main() {
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<pii> vp(n);
	for (int i = 0; i < n; i++) { 
		vp[i] = { a[i], i };
	}
	pii maxp = { 1e9, 1e9 };
	stmin<pii> st(maxp);
	st.build(vp);
	sort(vp.begin(), vp.end());
	reverse(vp.begin(), vp.end());
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		int pos = vp[i].second;
		if (pos == 0) continue;
		pii p = st.minimum(0, pos - 1);
		if (vp[i].first > p.first) {
			ans += vp[i].first - p.first;
			st.update(p.second, maxp);
			st.update(pos, maxp);
		}
	}
	cout << ans;
}
