#include<bits/stdc++.h>
#include<queue>
using namespace std;
#define MAX 10001
int main()
{
	ios_base::sync_with_stdio(false);
    priority_queue<int> pq;
	int n,A[MAX],B[MAX];
	cin>>n;
	for(int i=1;i<=n;i++) 
	{
	cin>>A[i];
    }
	for(int i=1;i<=2;i++) B[i]=A[i];
	for(int i=1;i<=n;i++)
	{
		vector<long long > v(100000);
		v[0]=1;
		if(i==1||i==2)
		{
		  cout<<"-1\n";
		}
		else 
		{
		  B[i]=A[i];
		  sort(B,B+i+1);
		  //for(int h=1;h<=i;h++) cout<<B[h];
		  int j=0;
		  int k=i;
		  while(j!=3) 
		  {
		  v[0]=v[0]*B[k--];
	      j++;
	      }
		  cout<<v[0]<<endl;
		}
	}
	return 0;
	
}
