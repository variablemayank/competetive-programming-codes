#include<iostream>
#include<assert.h>
#include<vector>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    assert(t>=1&&t<=100);
    while(t-->0)
    {

      cin>>n>>m;
    	string s;
    	set<string> V;
    	
        for(int i=0;i<n;i++)
        {
          cin>>s;
          V.push_back(s);
          
		}
		if(V.size()==n) cout<<"Yes\n";
		else cout<<"No\n";
	
    }
	   
	
    return 0;
}

