#include<bits/stdc++.h>
using namespace std;


const int maxi =100005;

int parent[maxi];  // sab ka papa

int root(int i)
{
   while(parent[i]!=i)
   {
           parent[i] = parent[parent[i]];
           i =parent[i];
   }	
   return i;
}

void unions(int a,int b)
{
	int A= root(a); // family bnana
	int B= root(b); // famil bnana
	if(A!=B) parent[A] =B;  // b bangya a ka papa
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n ,query;
	cin>>n>>query;
	for(int i=0;i<=n;i++) parent[i] =i;
	while(query--)
	{
		int a;
		cin>>a;
		if(a==1)
		{
			int b,c;
			cin>>b>>c;
			unions(b,c);  // making family :D
		}
		if(a==2)
		{
			int b;
			cin>>b;
			int i= root(b);
			parent[i] =parent[b] = b;
		}
		if(a==3)
		{
			int b;
			cin>>b;
			cout<<parent[b]<<endl;
		}
	}
}
