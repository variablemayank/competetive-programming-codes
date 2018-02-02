#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> vec;
		for(int i=0;i<n;i++)
		{
			int var;
			cin>>var;
			string var2 = to_string(var);
		//	cout<<var2;
		
			int count =0;
			for(int i=0;i<var2.size();i++)
			{
				if(var2[i] == '1' || var2[i] == '2' || var2[i] == '3')
				{
				   count ++;
				}
			}
			if(count == var2.size())
			vec.push_back(var);
		
		    
		}
		    sort(vec.begin(),vec.end());
		    if(vec.size() ==0)
		    printf("-1");
		    else for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
		    
		cout<<endl;
	}
}
