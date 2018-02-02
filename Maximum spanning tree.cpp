 #include<bits/stdc++.h>
 using namespace std;
 
 int parent[100005];
 int get(int x)
 {
 	if(parent[x]== x)
    return x;
    return (parent[x] =get(parent[x]));
 }
 
 void merge(int u,int v)
 {
 	parent[u] = v;
	 
 }
 vector<pair<int,int> > mst;
 int arr[100005];
 int brr[100005];
 int weigh[100005];
 
 int main()
 {
     ios_base::sync_with_stdio(false);
 	int t;
 	cin>>t;
 	while(t--)
 	{
	
 	
 	int n,k;
 	cin>>n>>k;
 	
 	
 	for(int i=1;i<=k;i++)
 	{
 	 int u,v,w;
 	 cin>>arr[i]>>brr[i]>>weigh[i];
 	 mst.push_back({weigh[i],i});
	}

	sort(mst.begin(),mst.end());
	reverse(mst.begin(),mst.end());
		for(int i=1;i<=n;i++) parent[i] =i;
	int ans =0;
	for(int i=0;i<mst.size();i++)
    {
    	int index = mst[i].second;
    	int a  = arr[index];
    	int b = brr[index];
    	a= get(a);
    	b= get(b);
    	if(a!=b)
    	{
    		ans+= weigh[index];
    		merge(a,b);
		}
		
	}
	cout<<ans<<endl;
   }
 }
