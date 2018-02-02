		#include <bits/stdc++.h>
		using namespace std;
		 
		int main() {
			int n,m,k,p,s,t,x=0,l,w,v,u,zz;
		cin>>n>>m>>s;
		for(int j=s;;j++)
		{
		p=(j/50)%475;
		for(int i=1;i<=25;i++)
		{
		p=((p*96)+42)%475;
		l=26+p;
		if(l==n){x=1;w=j;break;}}
		if(x)break;
		}
		cout<<w<<endl;
		if(w<=m)cout<<0<<endl;
		else{
		v=w-m;cout<<v<<endl;
		u=v/100;cout<<u<<endl;
		cout<<u<<endl;
		}
		 
		 
			return 0;
		}
