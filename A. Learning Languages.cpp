	#include<bits/stdc++.h>
	using namespace std;
	
	#define REP(i,a,b) for (int i = a; i <= b; i++)
	#define F first
	#define S second
	#define PB push_back
	#define MP make_pair
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
	
	int papa[107];
	
	int get(int x)
	{
		if(x== -1) return -1;
		if(x== papa[x]) return x;
		return (papa[x]== get(papa[x]));
	}
	void merge(int x,int y)
	{
		x = get(x);
		y= get(y);
		if(x!=y)
		{
			papa[x] =y;
		}
	}
	int main()
	{
		int n,m;
		cin>>n>>m;
		for(int i=0;i<105;i++) papa[i] =-1;
		int count =0;
		for(int i=0;i<n;i++)
		{
			int t;
			cin>>t;
			if(t==0) count++;
			vector<int> vec;
			for(int i=0;i<t;i++)
			{
				int b;
				cin>>b;
				vec.push_back(b);
			    if(papa[b] == -1 ) papa[b] =b;
			}
			for(int j=0 ;j<vec.size();j++)
			{
				for(int k=j+1;k<vec.size();k++)
				{
					merge(vec[j],vec[k]);
				}
			}
		}
		int cnt=0;
		for(int i=1;i<=m;i++)
		{
			if(i== get(i))
			cnt++;
		}
		if(cnt ==0) cnt++;
		cout<<count<<endl;
		cout<<cnt-1+count;
	}
