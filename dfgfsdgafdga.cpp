#include<bits/stdc++.h>
using namespace std;

int main() 
{ 
    int n,k;
    cin>>n>>k;
    int ans = 0;
    string s;
    for(int i=0;i<k;i++)
    {
       s+= 'a'+ans++;
    }
   
    for(int i=0;i<n;i++)
    {
    	cout<<s[i%k];
	}
	return 0;
}
