#include<bits/stdc++.h>
using namespace std;

vector<int> move1;
vector<int> move2;
int n;
bool valid(int l)
{
	int x = l;
	int y = l;
	//cout<<"x is "<<x<<endl;
	bool flag = false;
	
	for(int i=0 ; i<move1.size() ; i++)
	{
		if(move1[i]==0)
		{
			x*=2;
		}
		else
		{
			x = x*2+1;
		}
		if(x>n)
		{
			flag = true;
			break;
		}
	}
	
	if(flag == true)
	return 0;
	
	for(int i=0 ; i<move2.size() ; i++)
	{
		if(move2[i]==0)
		{
			y*=2;
		}
		else
		{
			y = y*2 + 1;
		}
		if(y > n)
		{
			flag = true;
			break;
		}
	}
	
	if(flag == true)
	{
		return 0;
	}
	return 1;
	
}

int lca(int a,int b)
{
	while(a != b)
	{
		if(a>b)
		{
			a/=2;
		}
		else
		{
			b/=2;
		}
	}
	return a;
}

int main()
{
    int t;
	cin>>t;
	while(t--)
	{
		    move1.clear();
			move2.clear();
			int u,v;
			cin>>n>>u>>v;
			int nu = u;
			int nv = v;
			  
			int l = lca(u,v);	
		//	cout<<"l is "<<l<<endl;
			while(nu != l)
			{
			  	 if(nu%2==0) // even
			  	 {
			  	 	 nu/=2;
			  	 	 move1.push_back(0);
				 }
				 else
				 {
				 	 nu = (nu-1)/2;
				 	 move1.push_back(1);
				 }
			}
			while(nv != l)
			{
			  	  if(nv%2==0)
			  	  {
			  	     nv/=2;
					 move2.push_back(0);	
				  }
				  else
				  {
				  	 nv = (nv-1)/2;
				  	 move2.push_back(1);
				  }
			}
			
			reverse(move1.begin(),move1.end());
			reverse(move2.begin(),move2.end());
			  
			  int low = 1;
			  int high = n;
			  int ans = 0;
			  while(low<=high)
			  {
			  	 int mid = (high+low)/2;
			  	 if(valid(mid) == true)
			  	 {
			  	    ans = max(ans,mid);	
			  	    low = mid+1;
				 }
				 else
				 {
				 	high = mid-1;
				 }
				 
			  }
			  cout<<ans<<endl;
		  
	}
	
	return 0;	
}
