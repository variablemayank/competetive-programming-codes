	#include<bits/stdc++.h>
	using namespace std;
	
	
	int main()
	{
		int  n,m;
		cin>>n>>m;
		int arr[1003];
	//	int brr[1004];
		
		for(int i=0;i<n;i++)
		{
		 cin>>arr[i];
		}
		vector<pair<int,int > >vec;
	    for(int i=0;i<n;i++)
	    {
	    	int v;
	    	cin>>v;
	    	int diff = abs(arr[i]-m);
	    	diff/= v;
	    	vec.push_back(make_pair(diff,i));
	    	
		}
		sort(vec.begin(),vec.end());
	//	for(int i=0;i<vec.size();i++)
	//	cout<<vec[i].first<<" "<<vec[i].second<<endl;
		
		for(int i=0;i<vec.size();i++)
		{
			for(int j=i+1;j<vec.size();j++)
			{
				if(vec[i].first==vec[j].first)
				{
				    if(vec[i].first ==vec[j].first)
				    {
				    	if(vec[0].first<vec[i].first)
				    	{
				    		cout<<vec[0].second;
				    		return  0;
						}
						else
						{
							cout<<"-1\n";
							return 0;
						}
					}
				}
			}
		}
		cout<<vec[0].second<<endl;
	//	return 0;
	}
