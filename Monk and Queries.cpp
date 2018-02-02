#include<bits/stdc++.h>
using namespace std;
#include<set>

multiset<long long > ms;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
    	int n,k;
    	cin>>n;
    
    	
    	
    	if(n==1)
    	{
    		cin>>k;
    		ms.insert(k);
		}
		
		if(n==2)
		{
			multiset<long long>::iterator it;
			cin>>k;
			it=ms.find(k);
		    if(it==ms.end())
			{
			  cout<<"-1\n";
		    }
			else ms.erase(it);
		}
		if(n==4)
		{
			 if(ms.empty()) cout<<"-1\n";
			 else{
			 	cout<<*ms.begin()<<endl;;
			 }
		}
		if(n==3)
		{
			if(ms.empty()) 
			{
				cout<<"-1\n";
			}
			
			else 
			{
				cout<<*ms.rbegin()<<endl;
			}
		}
		
	}
}


