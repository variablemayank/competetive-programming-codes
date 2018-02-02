#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  
   while(t--)
  {
  	int n;
  
  	cin>>n;
    map<int,int>mp;
  	for(int i=0;i<n;i++)
  	{
  		int k;
  		cin>>k;
  		mp[k]++;
  	}
  	int cnt = (*mp.begin()).second;
  	if(cnt&1) cout<<"Lucky\n";
  	else cout<<"Unlucky\n";
    
  }
  return 0;
}

