#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int main()
{
	queue<char> q;
	char qu[]= "abcd";
	int N=3;
	char ch;
	for(int i=0;i<4;i++) q.push(qu[i]);
	
	for(int i=0;i<N;i++)
	{
		ch= q.front();
		q.push(ch);
		
		q.pop();
		
	}
	while(!q.empty())
	{
		printf("%c",q.front());
		
		q.pop();
	}
	cout<<"\n";
	return 0;
}

//priority queue 

#include<iostream>
using namespace std;
int main()
{
	priority_queue<int> pq;
	
	pq.push(10);
	pq.push(20);
	pq.push(30);
	while(!pq.empty())
	
	cout<<pq.top()<<endl;
	
	
	return 0;
}
