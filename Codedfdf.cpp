#include<bits/stdc++.h>
using namespace std;


#define ll long long int
vector <ll> v;
vector <ll> v1;
vector <ll> v2;
const ll inf=100000000000005;
 int t,n,s;
bool fl=0;
ll gv=0,cv=0,val= 1ll<<48;
int main()
	{
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		gv=0;
		while(n--)
			{
			v.clear();
			val=1ll<<48;
			cin>>s;
			fl=0;
			cv=0;
			for(int i=0;i<s;i++)
				{
				v.push_back(0);
				cin>>v[i];
				}
		    sort(v.begin(),v.end());
			for(int i=0;i<s;i++)
				{
				if(i!=0 && v[i-1]%2!=v[i]%2)
					fl=1;
				val = fl?val/2:val;
				cv+= ((v[i]%2==0)?val:-val);
				}
			gv+=cv;
			}
		if(gv>0)
			cout<<"EVEN"<<endl;
		else if(gv<0)
			cout<<"ODD"<<endl;
		else
			cout<<"DON'T PLAY"<<endl;
	}
  	   return 0;
}
