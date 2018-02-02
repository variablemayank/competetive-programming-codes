	/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (int i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define PB push_back
	#define MP make_pair
	#define sz(c)     (int)c.size()
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    
    const int mod = 1000000007;
	const int maxi =100005;
	//int arr[maxi];
	//int brr[maxi];
//	int crr[maxi];
//	int n,m,k,l,j;
    vector<int> graph[maxi];
	int main()
	{
		jadu;
		int nodes,edges;
		cin>>nodes>>edges;
		for(int i=0;i<edges;i++)
		{
			int u,v;
			cin>>u>>v;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		int count1 =0;
		int count2 =0;
		int ncount =0;
		for(int i=1;i<=nodes;i++)
		{
			if(graph[i].size()==2) count1++;
			if(graph[i].size()==1)  count2++;
			if(graph[i].size()==nodes-1) ncount++;
		}
		if(count1 == nodes-2 && count2==2 &&ncount ==0) cout<<"bus topology";
		else if(count1==nodes&&count2==0 && ncount ==0) cout<<"ring topology";
		else if(ncount ==1 && count2 ==nodes-1 && count1==0) cout<<"star topology";
		else cout<<"unknown topology";
	}
