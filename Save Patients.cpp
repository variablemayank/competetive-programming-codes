#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(),x.end()
int main()
{
	int t;
	cin>>t;
	vector<int>v1(1000);
	vector<int>v2(1000);
	for(int i=0;i<t;i++) cin>>v1[i];
	for(int i=0;i<t;i++) cin>>v2[i];
	 
	 sort(all(v1));
	 sort(all(v2));
	 
	 int count=0;
	 for(int i=0;i<t;i++)
	 {
	 	if(v1[i]>=v2[i]) count++;
	 	
	 }
	if(count==t-1) cout<<"Yes\n";
	else cout<<"No\n";
}
