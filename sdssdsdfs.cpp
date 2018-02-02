#include<bits/stdc++.h>
 
#define newl "\n"
#define MODULO 1000000007
 
using namespace std;
 
int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,k;
		long long ans = 0;
		cin >> n >> k;
		vector< vector<bool> >sets;
		vector<int> length;
		for(int i= 0; i<n; i++){
			int len;
			cin >>  len;
			length.push_back(len);
			vector<bool> temp (k,false);
			for(int j = 0; j<len; j++){
				int ip;
				cin >> ip;
				temp[ip-1] = true;
			}
			sets.push_back(temp);
		}	
		
		bool isall;
		for(int i = 0; i<n-1; i++){
			for(int j = i+1; j<n; j++){
				isall = true;
				if(k<=length[i] + length[j]){
					for(int y = 0; y<k; y++)
						if(!(sets[i][y] || sets[j][y])){
							isall = false;
							break;
						}
				if(isall)
					ans++;
				}
			}
		}
		cout << ans << newl;
		
	}		
		
		
	
return 0;
} 
