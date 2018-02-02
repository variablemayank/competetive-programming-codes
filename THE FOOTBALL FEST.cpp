#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 10000
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	stack< ll > s;
	while(t--)
	{
		ll n=0,id=0;
		ll A[MAX];
		cin>>n>>id;
		int index=0,pas=0,back=0;
		A[0]=id;
		pas++;
		
		for(int i=1;i<=n;i++){
			string pass;
			cin>>pass;
			
			if(pass[0]=='P')
			{
			 cin>>A[i];
			 cout<<A[i];
			 index=i;
			 pas=i;
			 back++;
			}
			else 
			{
				A[i]=0;
				index=back;
				back=pas;
		    }
			
		}
		cout<<"Player";cout<<" "<<A[back]<<endl;
	}
}
