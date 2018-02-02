	#include<bits/stdc++.h>
	using namespace std;
	
    vector<pair<int,int> > edge[110];
	int main()
	{
		int n;
		cin>>n;
		int totalsum =0,sum=0;
        for(int i=1;i<=n;i++)
        {
        	int a,b,c;
        	cin>>a>>b>>c;
        	a--;
        	b--;
        	edge[a].push_back({b,0});
        	edge[b].push_back({a,c});
        	totalsum+= c;
        }
        
        int cur =0,prev=-1;
        for(int i=0;i<n;i++)
        {
        	int city,cost;
        	for(int j=0;j<2;j++)
        	{
        		city = edge[cur][j].first;
        		cost = edge[cur][j].second;
        		if(prev!=city) break;
			}
			prev = cur , cur = city;
			sum+= cost;
		}
		cout<<min(totalsum-sum,sum);
		
	    
	}
