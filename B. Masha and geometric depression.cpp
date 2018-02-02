	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false),cin.tie(0);
	
	int main()
	{
	    int b,q,l,m;
	    cin>>b>>q>>l>>m;
	    set<long long>s;
	    for(int i=0;i<m;i++)
	    {
	   	  int m;
	   	  cin>>m;
	   	  s.insert(m);
	    }	
	    
	    if(abs(b)>l)
	    {
	    	return cout<<"0",0;
		}
		else if(b==0)
		{
			if(s.count(0)) return cout<<"0",0;
			else return cout<<"inf",0;
		}
		else if(q==0)
		{// if s.count(0) return true means for ratio there exists first value if count is true
		// 1-1 or 1-0 
			if(s.count(0)) return cout<<1-s.count(0),0;
			else cout<<"inf";
			return 0;
		}
		else if(q==1)
		{
			if(s.count(b)) return cout<<"0",0;
			else return cout<<"inf",0;
		}
		else if(q==-1)
		{
			// if any b or -b not exists int the set we print 2-1-1 or 2-1-0 or 2-0-1 
			int x= 2-s.count(b)- s.count(-b);
			if(x>0) cout<<"0";
			else cout<<"inf";
			return 0;
 		}
 		long long ans =0;
 		
 		for(; abs(b)<=l;)
 		{
 			ans += 1-s.count(b); // if the element is present in the set 1-1 = 0
 			b*= q;
		}
		cout<<ans<<endl;
	}
