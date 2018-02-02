#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<long long > s;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            s.insert(val);
            
        }
        if(s.size()==n/2) cout<<"1\n";
        else cout<<"-1\n";
    }
}

