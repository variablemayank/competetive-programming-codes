	#include<bits/stdc++.h>
	using namespace std;
	
	#define ll long long 
	const int maxi = 1e5+5;
	ll  arr[maxi];
	ll parent[maxi];
	int thereina[maxi];
	int thereinb[maxi];
	
	map<int,int> mp;
	void init()
	{
		for(int i=1;i<=1e5;i++)
		{
			parent[i] = i;
		}
	}
	
	int  get(int a)
	{
	    if(a==parent[a])
		{
		  return a;	
	    }	
	    return parent[a] = get(parent[a]);
	}
	
	void merge(int a,int b)
	{
		a= get(parent[a]);
		b = get(parent[b]);
	    parent[a] =b;
	}
	
	int main()
	{
		init();
		int n,a,b;
		cin>>n>>a>>b;
		for(int i=1;i<=n;i++) cin>>arr[i],mp[arr[i]]=i;
		
		for(int i=1;i<=n;i++)
		{
			if(mp[a-arr[i]]==0 && mp[b-arr[i]]==0)
			{
				return cout<<"NO",0;
			}
		}
		for(int i=1;i<=n;i++)
		{
			int aval = a -arr[i];
			if(mp[aval]>=1)
			{
				merge(i,mp[aval]);
			}
			
			int bval = b- arr[i];
			if(mp[bval]>=1)
			{
				merge(i,mp[bval]);
			}
		}
		
		for(int i=1;i<=n;i++)
		{
			bool aval = mp[a-arr[i]]!=0;
			bool bval = mp[b-arr[i]]!=0;
			
			// inversion set rule haha
			if(aval ==true && bval ==false)
			{
				thereina[get(i)]= true;
			}
			if(aval == false && bval==true)
			{
				thereinb[get(i)] = true;
				
			}
		}
		for(int i=1;i<=n;i++)
		{
		   if(thereina[i]== true && thereinb[i]== true)
		   {
		   	 return cout<<"NO",0;
		   }
		}
		cout<<"YES\n";
		for(int i=1;i<=n;i++)
		{
			int ina =-1;
			if(thereina[get(i)])
			{
				ina =0;
			}
			else if(thereinb[get(i)])
			{
				ina = 1;
 			}
 			else
 			{
 			    ina = 0;	
			}
			cout<<ina<<" ";
		}
		cout<<endl;
	}
