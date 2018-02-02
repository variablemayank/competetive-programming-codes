#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char s[100001];
    for(int i=0;i<n;i++) cin>>s[i];
	cout<<s[1]<<s[2];
	int x,l,r;
	while(m--){

	cin>>x>>l>>r;
	s[x-1]= int_min;
	int first =l-1,second=r-1;
	int count=0;
	cout<<first<<second<<endl;
	
	cout<<s[first]<<s[second];
	
	while(first<=second)
	{
		if(s[first]==s[second]) count++;
		
		else if(s[first+1]==s[second]) {
			first=first+2;
			second--;
			count++;
		}
		else if(s[first]==s[second-1])
		{
			first++;
			second-=2;
		}
		else 
		second--;
		
	}
	cout<<count<<endl;
	if(count!=0) cout<<"Yes\n";
	else cout<<"No\n";
}
}


