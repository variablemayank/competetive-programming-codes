#include<bits/stdc++.h>
	using namespace std;
	
	int arr[1000006];
	int n, x, y, k, m, ans;
	int main(){
	
	 ios_base::sync_with_stdio(false);
		cin>>n>>m>>k;
		set<int> s;
		for (int i = 0; i<m; i++)
		{
			cin>>x;
			if (x == 1){
				cout<<1;
				return 0;
			}
			arr[x] = 1;
		}
		int l = 1;
		int u, v;
		for (int i = 0; i<k; i++)
		{
			int u,v;
			cin>>u>>v;
			if (u == l)
				l = v;
			else{
				if (v == l)
				l = u;
			   }
			if (arr[l]){
				cout << l << endl;
				return 0;
			}
		}
		cout<<l;
		return 0;
	}
