#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a;
		if(n>1) cout<<"0\n";
		else cout<<n<<endl;
	}
	
}
