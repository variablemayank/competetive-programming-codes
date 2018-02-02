#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n+1];
		set<int> s1;
		set<int> s2;
		int maxi = 0;
		for(int i=0;i<n;i++) 
		{
		
			cin>>arr[i];
			s1.insert(arr[i]);
		}
		
		if(k==0)
		{
			int mex=0;
			while(s1.find(mex)!=s1.end())
			mex++;
			
			cout<<mex<<endl;
		}
		else
		{
			  for(int i=0;i<=200005&& k>0;i++)
			  {
			  	 if(s1.find(i)==s1.end())
			  	 {
			  	     s1.insert(i);
			  	      k--;
				 }
				 if(k<=0)
				 break;
			  }
			  //for(set<int> ::iterator it =s1.begin();it!=s1.end();it++)
			 // cout<<*it<<" ";
			  //cout<<endl;
			  int mex =0;
			  while(s1.find(mex)!= s1.end())
			  mex++;
			  
			  cout<<mex<<endl;
		
 	    }
    }
}

