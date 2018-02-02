#include<bits/stdc++.h>
using namespace std;
 


int main()
{
	int n;
	cin>>n;
	vector<int> vec;
	for(int  i=0;i<n;i++)
	{
		int var;
		cin>>var;
		vec.push_back(var);
	}
	sort(vec.begin(),vec.end());
    int q;
    cin>>q;
    while(q--)
    {
    	int key;
    	cin>>key;
    	vector<int> ::iterator var= lower_bound(vec.begin(),vec.end(),key);
    	cout<<var - vec.begin()<<endl;
   
	}
    
}
