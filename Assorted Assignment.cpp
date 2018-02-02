#include<iostream>
#include<set>
using namespace std;
#define MAX 1000
int main()
{
	int n,m;
	
	set<int> s;
	
	int N[MAX],M[MAX];
	
	cin>>n>>m;
	
	for(int i=0;i<n;i++) cin>>N[i];
	
	for(int i=0;i<m;i++) cin>>M[i];
	
	for(int i=0;i<m;i++) s.insert(M[i]);
	
	set<int>::iterator it;
	
	int sum=0;
	
	for(it=s.begin(); it!=s.end();++it)
	{
	
		for(int i=0;i<n;i++)
		{
		 if(*it % N[i])
		 
		 sum=sum+N[i];
	    
	     }
	}
	cout<<sum<<endl;
}
