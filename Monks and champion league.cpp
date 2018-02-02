#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	cin>>m;n;
	priority_queue<long long > pq;
	for(int i=1;i<=n;i++)
	{
		int seats;
		cin>>seats;
		pq.push(seats);
	}
	long long sum=0;
	for(int i=1;i<=m;i++)
	{
		sum=sum+pq.top();
		//cout<<pq.top();
		pq.push(pq.top()-1);
		pq.pop();
	}
	cout<<sum<<endl;
	
}
