#include<bits/stdc++.h>
#include<set>
#include<vector>
usin namespace std;
#define ll long long 
int main()
{
    int t,input,input1;
    cin>>t;
    while(t--)
    {
      ll a,b,count;
      cin>>a>>b;
      assert(1<=a && a<=100000);
      assert(1<=b && b<=100000);
      vector<ll int> v(a+b);
      for(int  i=0;i<a+b;++i) 
	  {
	   cin>>v[i];
      }
      set<ll int> mys;
      for(int i=0;i<a;i++)
      {
        mys.insert(v[i]);
	  }
	  for(int i=a;i<a+b;i++)
	  {
	  	if(mys.find(v[i])!=mys.end())
	  	cout<<"YES\n";
	  	else
	  	cout<<"NO\n";
	  	mys.insert(v[i]);
	  }
      
	}
	return 0;
	
}
