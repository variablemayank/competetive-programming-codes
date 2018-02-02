#include<bits/stdc++.h>
using namespace std;


int arr[]  = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};


int main()
{
	string s;
	cout<<"2\n";
	fflush(stdout);
	cin>>s;
	if(s=="yes")
	{
		for(int i=0;i<=14;i++)
		{
			cout<<2*arr[i]<<endl;
			fflush(stdout);
			cin>>s;
			if(s=="yes")
			{
               cout<<"composite\n";
			   fflush(stdout);
			   return 0;
			   				
			}
			
		}
		cout<<"prime\n";
		fflush(stdout);
		return 0;
	}
    cout<<"3\n";
    fflush(stdout);
    cin>>s;
    if(s=="yes")
    {
    	for(int i=0;i<=10;i++)
    	{
    		cout<<3*arr[i]<<endl;
    		fflush(stdout);
    		cin>>s;
    		if(s=="yes")
    		{
    			cout<<"composite\n";
    			fflush(stdout);
    			return 0;
			}

		}
		cout<<"prime\n";
		fflush(stdout);
		return 0;
	}
	cout<<"5\n";
	fflush(stdout);
	cin>>s;
	if(s=="yes")
	{
		for(int i=0;i<=7;i++)
		{
			cout<<5*arr[i]<<endl;
			fflush(stdout);
			cin>>s;
			if(s=="yes")
			{
				cout<<"composite\n";
				fflush(stdout);
				return 0;
			}
		}
		cout<<"prime\n";
		fflush(stdout);
		return 0;
	}
	cout<<"7\n";
	fflush(stdout);
	cin>>s;
	if(s=="yes")
	{
		for(int i=0;i<=5;i++)
		{
			cout<<7*arr[i]<<endl;
			fflush(stdout);
			cin>>s;
			if(s=="yes")
			{
				cout<<"composite\n";
		        fflush(stdout);
		        return 0;
			}
		}
		cout<<"prime\n";
		fflush(stdout);
		return 0;
	}
	cout<<"prime\n";
	fflush(stdout);
	return 0 ;
}
