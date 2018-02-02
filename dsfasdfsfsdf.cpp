#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,m;
    cin>>s>>n>>m;
    if(n >s.length() ||m>s.length()) cout<<"-1";
    else 
    {
    string str = s;
        if(str[n-1] =='0') str[n-1] = '1';
        else str[n-1] ='0';
        
        if(str[m-1] == '0') str[m-1] ='1';
        else str[m-1] ='0';
        int count =0;
        for(int i=0;i<str.length();i++)
        {
            if(s[i] ==str[i]) count++;
        }
        cout<<count<<endl;
    }
}
