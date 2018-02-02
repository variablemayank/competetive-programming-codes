#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
int main()
{
	ios_base::sync_with_stdio(false);
	
	int t;
	cin>>t;
    map<ll,int> arr;
	while(t--)
	{
		string s;
		ll k;
		ll x=0,bits =0;
		cin>>s>>k;
		while(k)
		{
			// if the ith digit is even starting from zero from right
			if(k%10%2)
			{
			x = x|(1<<bits);
		    }  
			k/=10;
			bits++;
		}
	//	cout<<"Value of x is "<<x<<endl;
		if(s=="+") arr[x]++;
		if(s=="-") arr[x]--;
		if(s=="?") cout<<arr[x]<<endl;
 	}
 	return 0;
}
