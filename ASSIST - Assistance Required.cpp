#include<bits/stdc++.h>
using namespace std;


int main()
{
	bool check[50000];
	memset(check,false,sizeof(check));
	
   for(int i=2;i<=34000;i++)
   {
     if(check[i]==false)
     {
     int x=0;
    for(int j=i+1;j<=34000;j++)
    { 
    if(check[j]==false)
    x++;
    if(x==i)
    {
     check[j]=true;
     x=0;
    }
    }
    }
    }
	
	vector<int>solve;
	
	for(int i=2;i<=40000;i++)
	{
		if(check[i]==false)
		solve.push_back(i);
	}
	
//	cout<<solve.size()<<endl;
	int n;
	while(cin>>n!=0)
	{
		if(n==0) break;
		cout<<solve[n-1]<<"\n";
		
	}
	
	return 0;
}
