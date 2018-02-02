#include<iostream>
#include<vector>
#include<bitset>
#include<string>
#include<stack>
#include<queue>
#include<set>
#include<unordered_set>
#include<queue>
using namespace std;
int main()
{
	int t;
	cin>>t;
    vector<string>arr(t);
    for(int i=0;i<t;i++) cin>>arr[i];
    vector<bitset<2001> > vec(t);
    for(int i=0;i<t;i++)
    {
    	for(int j=0;j<t;j++)
    	{
    		if(arr[i][j]=='1')
    		{
    			arr[i] =arr[i].set(j);
			}
    	}
    }
    int count =0;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j!=i;j++)
    	{
    		if(arr[i][j]=='0')
    		{
    			if((vec[i]&vec[j]).any())
    			{
    				count+= 2;
    				
				}
			}
		}
	}
	cout<<count<<endl;
}
