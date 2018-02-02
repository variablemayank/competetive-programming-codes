	
	#include"bits/stdc++.h""
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false),cin.tie(0);
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int n,q;
    		cin>>n>>q;
    		vector<int> arr(n+1);
    		vector<pair<pair<int,int>,int> > mp;
    		for(int i=1;i<=n;i++) cin>>arr[i];
    		
    		int left =1,right =1;
    		int count  =0;
    		while(right <=n)
    		{
    			if(arr[left] == arr[right])
    			{
    				count++;
    			    ++right;
				}
    			else 
    			{
    			//  cout<<right<<endl;
    			  mp.push_back(make_pair(make_pair(left,right-1),count));
    			  left = right;
    			  count=0;
    			  
				}
			}
		//	cout<<left<<" "<<right<<endl;
			mp.push_back(make_pair(make_pair(left,right-1),count));
			for(int i=0;i<mp.size();i++)
			{
				cout<<mp[i].first.first<<" "<<mp[i].first.second<<" "<<mp[i].second<<endl;
			}
		
	       while(q--)
	       {
	    	int l,r,k;
	    	cin>>l>>r>>k;
	        for(int i=0;i<mp.size();i++)
	        {
	        	g:
	        	int diff=0,diff2=0,diff3=0;
	        	if(l>= mp[i].first.first)
	        	{
	        		diff = l - mp[i].first.first;
	        		if(r>mp[i].first.second)
	        		{
	        		  diff3 = diff2 - diff1 + mp[i].second;
	        		  if(diff3>=k)
					  {
					    count++;
					    break;
					  }
	          		  
					}
				    else
				    {
				    	l  = mp[i].first.second+1;
				    	i++;
				    	goto g;
					}
				}
			 }
	    	
		    }
	}
