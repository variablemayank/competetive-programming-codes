#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		ios_base::sync_with_stdio(false);
		int t;
		cin>>t;
		while(t--)
		{
			int n,q;
			cin>>n>>q;
			vector<int> arr(n+1);
			for(int i=1;i<=n;i++)
			{
				cin>>arr[i];
			}
			
			while(q--)
			{
				int l,r,k;
				cin>>l>>r>>k;
				if(l==r)
				{
					if(k==1) 
					cout<<"1"<<endl;
					else cout<<"0"<<endl;
					
				}
			
				else
				{
					
				
						int first = arr[l];
						//vector<int> vec;
						int count =0;
						int count2=0;
						for(int j=l;j<=r;j++)
						{
							if(arr[j]==first) count++;
							else 
							{
							    if(count>=k) count2++;
 							//	vec.push_back(count);
								count =1;
								first = arr[j];
							}
						}
						if(count>=k) count2++;
						cout<<count2<<endl;
			    }
		   }
	    }
	} 
