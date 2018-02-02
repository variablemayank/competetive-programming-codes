#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string str;
	cin>>str;
	int leng = str.length();
	vector<int> vec;
	for(int i=0;i<leng;i++)
	{
	  for(int j=i;j<leng;j++)
	  {
	  	cout<<i<<" "<<j<<endl;
	  	string s = str.substr(i,j);
	  	cout<<s<<endl;
	    int len = s.length();
	    if(len ==1)
	    {
	    	vec.push_back(s[i]-96);
		}
		else 
		{
			bool flag =false;
		   for(int k=0;k<len-1;k++)
		   {
		   	if(s[k]==s[k+1])
		   	continue;
		   	 else 
		   	 {
		   	   i =j;
		   	   flag =true;
			   break;	
			 }
		   }
		   if(flag ==false)
		   {
		    vec.push_back(len * (s[0]-96));
		    break;
		    }
		}
		
	   }
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
 	int q;
	cin>>q;
	while(q--)
	{
		int val ;
		cin>>val;
		if(binary_search(vec.begin(),vec.end(),val))
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
	
     
}
