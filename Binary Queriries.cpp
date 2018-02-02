#include<bits/stdc++.h>
using namespace std;
#define max 1e6
int main()
{
	int n,q;
	vector<int>v(max);
	cin>>n>>q;
	for(int i=0;i<n;i++) cin>>v[i];

	int sum=0;
	while(q--)
	{
	
	int m;
	cin>>m;
	if(m==1)
	{
	   int sec;
	   cin>>sec;
	   if(v[sec-1]==0) v[sec-1] =1;
	   else v[sec-1]=0;
	}
	if(m==0)
	{
		 int l,r;
		 cin>>l>>r;
		
		 for(int i=r-1;i>=l;i++)
		 {
		 	if(v[i]==1)
		 	{
		 		sum += pow(2,i+1);
			}
		 }
	
	}
    }
    cout<<sum<<endl;
    if(sum%2==0) cout<<"EVEN\n";
		 else cout<<"ODD\n";
    }
		 

