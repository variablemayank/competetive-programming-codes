	#include<bits/stdc++.h>
	using namespace std;
	
	int arr[100005+9];
	pair<int,int> p;
	int main()
	{
	     int n,k;
	     cin>>n>>k;
	     for(int i=0;i<n;i++) cin>>arr[i];
	     sort(arr,arr+n);
	     int s=0;
	     int j=0;
	     long long  sum =0;
	     for(int i=0;i<n;i++)
	     {
	     	  sum+= arr[i];
	     	  while(1LL*(i-j+1)*arr[i] >sum+k )
	     	  {
	     	     sum -= arr[j];
				  j++;   	
			  }
			  p= max(p,{(i-j+1),-arr[i]});
		 }
		 //sort(vec.begin(),vec.end());
		// for(int i=0;i<vec.size();i++)
		 //cout<<vec[i].first<<" "<<vec[i].second<<endl;
		// cout<<vec[vec.size()-1].first<<" "<<vec[vec.size()-1].second<<endl;
		cout<<p.first<<" "<<-1*p.second;
	}
