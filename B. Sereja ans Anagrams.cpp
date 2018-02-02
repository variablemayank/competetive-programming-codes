#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main()
{
	ios_base::sync_with_stdio(false);
	int n,m,p;
	cin>>n>>m>>p;
    ll arr[n];
    ll brr[m];
    
    for(int i=0;i<n;i++) cin>>arr[i];
    map<int,int> freq;
    for(int i=0;i<m;i++)cin>>brr[i],freq[brr[i]]++;
    
    int cnt[p];
    
    for(int i=0;i<p;i++)
    {
    	cnt[i] =0;
	}
	
	map<int,int>chk[p];
	vector<int> res;
	
	for(int i=0;i<n;i++)
	{
		chk[i%p][arr[i]]++;
		cnt[i%p]++;
		
		if(cnt[i%p]>m)
		{
			 cnt[i%p]--;
			 chk[i%p][arr[i-m*p]]--;
			 if(chk[i%p][arr[i-m*p]]==0)
			 {
			   chk[i%p].erase(arr[i-m*p]);	
			 }
			
		}
		if(cnt[i%p]==m and chk[i%p]==freq)
		{
			res.push_back(i-(m-1)*p);
		}	
	}
	
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]+1<<" ";
	}
	
	return 0;
	
}
