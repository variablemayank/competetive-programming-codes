#include<iostream>
using namespace std;
#include<set>
int main()
{
	int t;
	cin>>t;
	while(t-->0)
	{
		
		set<int> s;
		int n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			int n;
			cin>>n;
			s.insert(n);
		}
		set<int>::iterator it;
	    int count =0;
		for(it=s.begin();it!=s.end();it++) count++;
		cout<<count<<endl;
		
		if(count==m) cout<<"Perfect husband\n";
		if(count>m) cout<<"Lame husband\n";
		if(count<m) cout<<"Bad husband\n";
	}
}
