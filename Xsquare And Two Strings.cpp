#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        int arr[26]={0};
        int brr[26]={0};
        for(int i=0;i<s1.length();i++) arr[s1[i]-97]++;
        for(int j=0;j<s2.length();j++) brr[s2[j]-97]++;
        bool flag= false;
        for(int i=0;i<26;i++)
        {
            if(arr[i]>0 &&brr[i]>0) 
            {
                cout<<"Yes\n";
                flag = true;
                break;
            }
        }
        if(flag==false)
        cout<<"No\n";
    }
}

