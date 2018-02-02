#include<bits/stdc++.h>
using namespace std;

int arr[100005];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    
    long long unsigned  tot =0;
    for(int i=0;i<n;i++)
    {
        tot +=arr[i];
    }
    
    set<long long > s;
    long long unsigned pre =0;
    for(int i=0;i<n;i++)
    {
       pre += arr[i];
        s.insert(arr[i]);
        long long unsigned suf = tot - pre;
        if(suf==pre)
        {
            return cout<<"YES",0;
        }
        if((pre-suf)%2==0 && s.find((pre-suf)/2)!=s.end())
        {
        	cout<<"pre"<<pre<<" "<<"suf"<<suf<<endl;
        	cout<<"pre-suff"<<pre-suf<<endl;
            return cout<<"YES",0;
        }
    }
    
    s.clear();
    long long unsigned suf =0;
    for(int i=n-1;i>=0;i--)
    {
        suf +=arr[i];
        
        s.insert(arr[i]);
        long long unsigned  pre = tot - suf;
        if(suf == pre)
        {
            return cout<<"YES",0;
        }
        if(((suf-pre)%2)==0 && s.find((suf-pre)/2)!= s.end())
        {
        	cout<<"pre"<<pre<<" "<<"suf"<<suf<<endl;
        	cout<<"suf-pre"<<suf-pre<<endl;
            return cout<<"YES",0;
        }
    }
    
    return cout<<"NO",0;
}
