#include<bits/stdc++.h>
using namespace std;

int query(int x,int y)
{
	if(x == -1) return 0;
	cout<<"1"<<" "<<x<<" "<<y<<endl;
	string s;
	cin>>s;
	return ("TAK"==s);
}

int get(int l,int r)
{
	if(l>r) return -1;
	
	while(l<r)
	{
		 int mid = (l+r)>>1;
		 if(query(mid,mid+1))
		 {
		 	r= mid;
		 }
		 else 
		 l = mid+1;
	}
	return l;
		
}

int main()
{
	int n,k;
	cin>>n>>k;
	int x =  get(1,n);
	int y =  get(1,x-1);
	if(!query(y,x)) y = get(x+1,n);
	cout<<"2"<<" "<<x<<" "<<y<<endl;
	return 0;
}
