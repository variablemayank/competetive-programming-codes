#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		priority_queue<long long> pq;
		long long n,k,x;
		cin>>n>>k;
		while(n--) 
		{
		cin>>x;
		pq.push(x);
	    }
	    long long count=0;
	    while(k--)
	    {
	        count+=pq.top(); cout<<count;
	        pq.push(pq.top()/2);
	        pq.pop();
		}
		cout<<count<<endl;
		
	}
}
