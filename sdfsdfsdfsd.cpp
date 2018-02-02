#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--){
		deque<int> dq;
		int n,q;
		cin>>n>>q;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			dq.push_back(x);
		}
		sort(dq.begin(),dq.end());
		while(q--){
			deque <int> temp;
			temp=dq;
			int k,ans=0;
			cin>>k;
			deque<int>::iterator i;
			for (i =temp.end() ; i >= temp.begin(); i--){
					if(temp.back()>=k)
					{
						ans++;
						temp.pop_back();
					}
					else
					{
						int diff=k-temp.back();
						while(diff--)
						{	if(!temp.empty())
							{
							temp.pop_front();
							temp.back()++;
							}
							else break;
						}
					}
 
			}
			cout<<ans<<endl;
		}
 
 
	}
	return 0;
}
