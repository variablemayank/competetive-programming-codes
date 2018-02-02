#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    string s1=s;
    char c=s1[0];
    int j=0;
  // cout<<c;
   for(int i=0;i<s1.length();i++){
        if(s1[i]==c){
            char a=97+j;
            s1[i]=a;
        }
        else{
            c=s1[i];
            j++;
          //  char c=s[i];
            char b=97+j;
            s1[i]=b;
        }
    }
 // cout<<s1;
  if(s1==s) cout<<"YES";
  else cout<<"NO";
    
}

