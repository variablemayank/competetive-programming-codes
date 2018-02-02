#include <bits/stdc++.h>
using namespace std;

bool prime1[10000];
int  primeg()
{
	memset(prime1,true,sizeof(prime1));
    for(int i=2;i*i<=10000;i++)
    {
        if(prime1[i]==true)
        {
        for(int j=i*2;j<=10000;j+=i)
        {
            prime1[j]= false;
        }
        }
    }
    //for(int i=2;i<100;i++) 
    //if(prime1[i]==true) cout<<i<<" ";
}

int main()
{
    primeg();
    int x,n;
    cin>>x>>n;
    
        int count =n;
        for(int i=n+1;i<=x;i++)
        {
            if(prime1[i]==false) count++;
            
        }
        
        cout<<count<<endl;
    
}
