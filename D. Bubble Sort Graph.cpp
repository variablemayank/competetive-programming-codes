	#include<bits/stdc++.h>
	using namespace std;
	
	
	int arr[100005];
	int parent[100005];
	void init()
	{
	 for(int i=1;i<=100005;i++)
	 {
	 	parent[i] = i;
	 }
	}
	int get(int x)
	{
		if(parent[x]==x)
		{
			return x;
			
		}
		return (parent[x]=get(parent[x]));
	}
	void merge(int x,int y)
	{
		x  =get(parent[x]);
		y = get(parent[y]);
		parent[x] =y;
	}
	 vector<int> v;
	int main()
	{
		int n;
	    ios_base::sync_with_stdio(0);
	    cin>>n;
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	
	    v.push_back(arr[0]);
	    for(int i=1;i<n;i++)
		{
	
	        if(arr[i] > v.back())
			{
	            v.push_back(arr[i]);
	            continue;
	        }
	
	        int pos = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
	        cout<<pos<<" "<<i<<endl;
	        v[pos] = arr[i];
	    }
	   
	    cout<<v.size();
	    return 0;
	}
