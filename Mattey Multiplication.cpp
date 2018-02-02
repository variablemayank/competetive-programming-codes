#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long n,m;
		cin>>n>>m;
		if(m==1) cout<<"("<<n<<"<<0)"<<endl;
		else
		{
		 ll val = m,rem;
		  	  val = val/n;
		  	//  cout<<val;
		  	  rem= m%n;
		  	//  cout<<rem;
		  	  if(val!=0 &&rem==0)cout<<"("<<n<<"<<"<<val<<")";
		  	  else cout<<"("<<n<<"<<"<<val<<") + ";
		  	  for(int i=0;i<rem;i++)
		  	  {
		  	  	if(i==rem-1) cout<<"("<<n<<"<<"<<"0"<<")";
		  	  	else  cout<<"("<<n<<"<<"<<"0"<<") + ";
				
			  }
			  cout<<endl;
              }
		  
		}
	}

