#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	
	scanf("%d",&n);
    string s;
    getline(cin,s);
  //   gets(s);
     int maxi =0;
     int count =0;
    for(int i=0;i<s.size();i++)
    {
          if(s[i]>=65 && s[i]<=90)
		  {
		  	 count++;
		  }
		  
      	  if(s[i]==' ')
      	  {
      	       maxi = max(maxi,count);	
      	       count =0;
		  }
	 
	
	}
	  maxi  = max(count,maxi);
	  cout<<maxi<<endl;
	
}
