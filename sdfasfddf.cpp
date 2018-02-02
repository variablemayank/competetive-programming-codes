#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>6)
	{
		n=n/6;
		for(int i=0;i<n;i++) cout<<"9";
	}
	else if(n==5) cout<<"5";
		else if(n==4) cout<<"4";
		else if(n==3) cout<<"7";
		else if(n==2) cout<<"1";
	}
