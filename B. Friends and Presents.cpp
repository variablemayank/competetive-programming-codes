#include<bits/stdc++.h>
using namespace std;

int main()
{
	int c1,c2,x,y;
	cin>>c1>>c2>>x>>y;
	vector<int> a,b;
	
	
	int count = c1;
	int count1 = c2;
	set<int> s1;
	set<int> s2;
	
	for(int i=1;i<=1000000009;i++)
	{
	    if(!count)
		{
			break;
		}
		if(i%x!=0 && count>=0) 
		{
		  s1.insert(i);
		  count--;
		}
	
    }
    
    for(int i=1;i<=1000000009;i++)
    {
    	if(!count1)
		{
			break;
		}
    	if((i%y!=0) && (count1>=0) && (s1.find(i)== s1.end()))
    	{
    		s2.insert(i);
    		count1--;
    	}
    }
    
 
///	cout<<endl;
//	for(auto it:s2)
////	{
	//	cout<<it<<" ";
	//}
	if(s1.size()>s2.size())
	{
		auto  val=0;
	    for(auto it :s1)
	    {
	    	val = it;
		}
		cout<<val;
		return 0;
	}
    else
    {
    	auto val =0;
    	for(auto it:s2)
    	{
    		val = it;
    		
		}
		cout<<val;
		return 0;
    }

}
