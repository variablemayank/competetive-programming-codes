#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
vector<long long int,long long int> mp;
vector<long long int> vec;
long long int binary(long long el)
{
	 long long int low=0,mid,high=vec.size()-1;
	 while(low<=high)
	 {
	 	mid=(low+high)/2;
	 	if(vec[mid]==el)
	 	return mid;
	 	else if(vec[mid]<el)
	 	low=mid+1;
	 	else high=mid-1;
	 }
	 return high;
}
int main()
{
	int Q,sum=0;
	scanf("%d",&Q);
	while(Q--)
	{
		  long long int check,X,K,T;
		  scanf("%lld",&check);
		  int k=0;
		  if(check==1)
		  {
		  	   scanf("%lld %lld",&X,&T);
		  	   sum+=X;
		  	   vec.push_back(T);
		  	   mp.push_back(make_pair(T,sum));
		  }
		  else
		  {
		  	  cin>>K>>T;
		  	  int r = T-K;
		  	  if(r>0)
		  	  {
		  	     int low = binary(r);
				 if(vec[low]<r)
				 cout<<sum-mp[low].second<<endl;
				 else cout<<mp[K-1].second<<endl;	
			  }
		      else
		      cout<<mp[K-1].second<<endl;
		  }
	}
	return 0;
}
