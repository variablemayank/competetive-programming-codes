#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n+1);
    map<int,int> mp;
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
        mp[v[i]]=i;
    }
    int start,end,element;
    for(int i=0;i<q;i++)
    {
        cin>>start>>end>>element;
        start--;
        end--;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=start;i<=end;i++)
        {
            mini=min(mini,v[i]);
        }
        int new_index=element-mini;
        int newindex=start+new_index;
        if(mp[newindex]!=mp[element])
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
 
    }
 
}
 
