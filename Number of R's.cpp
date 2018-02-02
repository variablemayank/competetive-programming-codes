#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		
    string s;
	cin>>s;
    int len =s.length();
	int arr[len+1]={0};
	int brr[len+1]={0};
	int count =0;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='R')
		{
			count++;
		  arr[i]= -1;
	    } 
	    else
	    arr[i] =1;
	}
	
    
    int maxi =brr[0]=arr[0];
 
    for (int i =1; i < len; i++)
    {
       brr[i] = max(arr[i],arr[i]+brr[i-1]);
       maxi = max(brr[i],maxi);
    }
    cout<<maxi+count<<endl;
	
    }  

}

