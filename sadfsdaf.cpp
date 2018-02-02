#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1,s2,s3;
	cin>>s>>s1>>s2>>s3;
	char arr[4][4];
	
	for(int i=0;i<4;i++)
	{
		arr[0][i]= s[i];
	}
	for(int i=0;i<4;i++)
	{
		arr[1][i]= s1[i];
		
	}
	for(int i=0;i<4;i++)
	{
		arr[2][i] =s2[i];
	}
	for(int i=0;i<4;i++)
	{
		arr[3][i]= s3[i];
	}
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
		    //cout<<i<<j<<endl;
		     if(arr[i][j]=='x' && arr[i][j+2] == 'x' && arr[i][j+1]=='.')
			{
				//cout<<i<<j;
				cout<<"YES\n";
				return 0;
			}
			if(arr[i][j]=='x'&&arr[i][j+1]=='x' && arr[i][j+2]=='.')
			{
				cout<<"YES\n";
				return 0;
			}
		
		}
    }
    for(int i=3;i>=0;i--)
	{
		for(int j=3;j>=0;j--)
		{
		    //cout<<i<<j<<endl;
		     if(arr[i][j]=='x' && arr[i][j-2] == 'x' && arr[i][j-1]=='.')
			{
				//cout<<i<<j;
				cout<<"YES\n";
				return 0;
			}
			if(arr[i][j]=='x'&&arr[i][j-1]=='x' && arr[i][j-2]=='.')
			{
				cout<<"YES\n";
				return 0;
			}
		
		}
    }
    for(int i=0;i<4;i++)
    {
    	for(int j=0;j<4;j++)
    	{
    	 if(arr[j][i] =='x' && arr[j+1][i]=='x' &&j+1<4 && arr[j+2][i]=='.')
    	 {
    	 	cout<<"YES\n";
    	 	return 0;
		 }
		 else if(arr[j][i]=='x' &&arr[j+2][i]=='x' && j+2<4 && arr[j][i]=='.')
		 {
		 	cout<<"YES\n";
		 	return 0;
		 }
		}
	}
	for(int i=3;i>=0;i--)
    {
    	for(int j=3;j>=0;j--)
    	{
    	 if(arr[j][i] =='x' && arr[j-1][i]=='x' && arr[j-2][i]=='.')
    	 {
    	 	cout<<"YES\n";
    	 	return 0;
		 }
		 else if(arr[j][i]=='x' &&arr[j-2][i]=='x' && arr[j][i]=='.')
		 {
		 	cout<<"YES\n";
		 	return 0;
		 }
		}
	}
	for(int i=0;i<4;i++)
	{
		if(arr[i][i]=='x' &&arr[i+1][i+1]=='x' &&i+1<4 &&arr[i+2][i+2]=='.')
		{
			cout<<"YES\n";
			return 0;
			
		}
		if(arr[i][i]=='x' &&arr[i+2][i+2]=='x'&&i+2<4&&arr[i+1][i+1]=='.')
		{
			cout<<"YES\n";
			return 0;
		}
	}
	for(int i=3;i>=0;i--)
	{
		if(arr[i][i]=='x' &&arr[i-1][i-1]=='x' &&arr[i-2][i-2]=='.')
		{
			cout<<"YES\n";
			return 0;
			
		}
		if(arr[i][i]=='x' &&arr[i-2][i-2]=='x' &&arr[i-1][i-1]=='.')
		{
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}
