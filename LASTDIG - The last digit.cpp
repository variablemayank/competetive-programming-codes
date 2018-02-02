#
include<bits/stdc++.h>
using namespace std;
 
int Modulo(int a, string b)
{
  
    int mod = 0;
    for (int i=0; i<(b).size(); i++)
        mod = (mod*10 + b[i] - '0')%a;
    return mod; 
}

void LastDigit(string a,string b)
{
    int len_a = a.size(), len_b =b.size();
    int exp = (Modulo(4,b)==0)? 4 : Modulo(4, b);
    int res = pow(a[len_a - 1] - '0', exp);
    cout<<res%10;
}
 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	string a,b;
    	cin>>a>>b;
        LastDigit(a,b);
        cout<<endl;
    }  
}
