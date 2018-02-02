#include<bits/stdc++.h>
using namespace std;

const int maxn  = 300000;

map<string,int> mp;
int idx =0;
int revid[maxn];
vector<int> values[maxn];
vector<string> rec;


int getid(string s)
{
	if(mp.find(s)==mp.end())
	{
  	  mp[s]  = idx;
	  idx++;
      rec.push_back(s);
	}
	return mp[s];
}


int main()
{
    int n,k;
	cin>>n>>k;
	while(n--)
	{
	   string temp;
	   cin>>temp;
	   int key ;
	   cin>>key;
	   int id = getid(temp);
	   
	   reverse(temp.begin(),temp.end());
	   revid[id]  =  getid(temp);
	   values[id].push_back(key);
	}	
	int ans =0,rem =0,extra=0;
	for(int i=0;i<maxn;i++)
	sort(values[i].begin(),values[i].end());
	
	for(int i=0;i<maxn;i++)
	{
		if(revid[i]==i)
		{
			int sz = values[i].size();
			
			while(sz>1)
			{
				int v1 = values[i][sz-1];
				int v2 = values[i][sz-2];
				
				if((v1+v2)>0)
				{
					rem = min(rem,v2);
					ans += (v1+v2);
					values[i].pop_back();
					values[i].pop_back();
					sz -=2;					
				}
				else 
				break;
			}
			if(sz)
			{
				extra = max(extra,values[i][sz-1]);
			}
		  
		}
		else
		{
			int  u = i;
			int  v= revid[i];
			int sz1 = values[u].size();
			int sz2 = values[v].size();
			
			while(sz1 && sz2)
			{
				int u1 = values[u][sz1-1];
				int u2 = values[v][sz2-1];
				if((u1+u2)>0)
				{
					ans += (u1+u2);
					sz1--;
					sz2--;
					values[u].pop_back();
					values[v].pop_back();
				}
				else
				break;
			}
		}
		
		
	}
	ans = max(ans -rem,ans+extra);
		cout<<ans<<endl;
		return 0;
		
}
