#include<bits/stdc++.h>
using namespace std;

int flag[100000];
main()
{
	long  n,k;
	cin>>n>>k;
	long  t;
	cin>>t;
	vector<long > arr(t+1);
	
    for(long  i=1;i<=t;i++)
    {
       cin>>arr[i];
	}
	

	queue<long> pq;
	memset(flag,-1,sizeof(flag));
	pq.push(n);
	flag[n] =0;
    
    while(!pq.empty())
    {
    	int val = pq.front();
    	pq.pop();
    	if(val==k) break;
    	for(int i=1;i<=t;i++)
    	{
    		int  v =(val *arr[i])%100000;
    		
    		if(flag[v]==-1)
    		{
    			
    			flag[v]  = flag[val]+1;
    			pq.push(v);
			}
		}
	}
	cout<<flag[k];
	
	
}
