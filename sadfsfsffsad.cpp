    #include<iostream>
    #include<cstdio>
    #include<vector>
    #include<climits>
    #include<set>
    using namespace std;
    int visited[300005];
    long long int arr[300005];
    int main()
    { 
    	vector<vector<int> > v(300005,vector<int>());
    	long long int max=INT_MIN,ans;
    	multiset<pair<long long int,long long int> > m;
    	multiset<pair<long long int,long long int> >::iterator it;
    	int n,ind,a,b;
    	scanf("%d",&n);
    	for(int i=0;i<n;i++)
    	{
    		scanf("%lld",&arr[i]);
    		if(arr[i]>max)
    		{
    			max=arr[i];
    			ind=i+1;
    		}
    		visited[i+1]=0;
        }
        for(int i=0;i<n-1;i++)
        {
        	scanf("%d%d",&a,&b);
        	v[b].push_back(a);
        	v[a].push_back(b);
        }
        ans=arr[ind-1];
        int prev;
        m.insert(make_pair(arr[ind-1],ind));
        while(!m.empty())
        {cout<<m.size()<<endl;
    	it=(--m.end());
    	cout<<1;
        pair<long long int,long long int> p=*it;
        if(ans<p.first)
        ans=p.first;
        prev=p.second;
        cout<<prev<<ans<<endl;
        visited[prev]=1;
        cout<<3<<endl;
        m.erase(it);
        cout<<2;
        	for(int i=0;i<v[prev].size();i++)
        	{cout<<1;
        		arr[v[prev][i]-1]+=1;
        		m.insert(make_pair(arr[v[prev][i-1]-1],v[prev][i]));
        		cout<<1;
        	}
        	cout<<m.size()<<endl;
        }
        for(int i=1;i<=n;i++)
        {
        	if(!visited[i])
        	{
        		m.insert(make_pair(arr[i-1],i));
        		while(!m.empty())
        	 {it=(--m.end());
        	 pair<int,int> p=*it;
        if(ans<p.first)
        ans=p.first;
        prev=p.second;
        visited[prev]=1;
        m.erase(it);
        	for(int i=0;i<v[prev].size();i++)
        	{
        		arr[v[prev][i]-1]+=1;
        		m.insert(make_pair(arr[v[prev][i-1]],v[prev][i]));
        	}
        }
       }
      }
     
        cout<<ans;
        return 0;
    }
     
