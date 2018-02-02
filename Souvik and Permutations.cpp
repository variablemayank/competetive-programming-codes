#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll fact[100005];
ll modinver[100005];
const int mod = 1000000007;
ll fast_exp(ll a,ll b)
{
	if(b==0)
	return 1;
	if(b%2==0)
	return (fast_exp((a%mod*a%mod)%mod,b/2))%mod;
	else
	return (a%mod*fast_exp((a%mod*a%mod)%mod,(b-1)/2))%mod;
}
void init()
{
	fact[0] =1;
	modinver[0] =1;
	for(int i=1 ;i<100005;i++)
	{
		fact[i]= (fact[i-1]%mod *i%mod )%mod;
		modinver[i] = ( modinver[i-1] % mod * fast_exp(i,mod-2))%mod;
	}
}

int main()
{
	init();
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int arr[26] ={0};
		int vowel(0),count(0);
		for(int i= 0;i<s.length();i++)
		{
			arr[s[i]- 97]++;
			
			     if(s[i]=='a') vowel++;
			else if(s[i]=='e') vowel++;
			else if(s[i]=='i') vowel++;
			else if(s[i]=='o') vowel++;
			else if(s[i]=='u') vowel++;
			else
			{
				count++;
			}
		}
		ll res = (fact[vowel]%mod * fact[count]%mod)%mod;
		//cout<<"res"<<res<<endl;
		for(int i=0;i<26;i++)
		{ 
		   if(arr[i])
		   res = (res%mod* modinver[arr[i]]%mod)%mod;
		  // cout<<res<<endl;
		}
		cout<<res<<endl;
		
	}
}
