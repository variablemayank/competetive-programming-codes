#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <bitset>
#include <utility>
 
using namespace std;
 
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define ll long long
 
int main(){
	set<int> st[1500];
	int n, m, x, y;
	cin >> n >> m;	
	while(m--){
		cin >> x >> y;
		st[x].insert(y);
		st[y].insert(x);
	}
	int flag = 1;
	for(int i = 1; i <= n; ++i){
		for(set<int>::iterator it = st[i].begin(); it != st[i].end(); ++it){
			if((*it) != i){
				if(st[*it].count(i) == 0){flag = 0; cout << "NO"; return 0;}
			}
		}
	}
	cout << "YES";                                                           
	return 0;
}
 
