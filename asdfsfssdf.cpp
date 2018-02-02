#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string w;
	int flag=0,i;
	cin>>w;
	for(i=0;i<w.size();i++)
	{
		if(w.at(i)==w.at(i+1))
		{
			cout<<"No"<<endl;
			break;
		}
		if(w.at(i)=='a' &&  w.at(i+1)=='e' || w.at(i+1)=='i' || w.at(i+1)=='u' || w.at(i+1)=='o' || w.at(i+1)=='y')
		{
			cout<<"No"<<endl;
			break;
		}
		if(w.at(i)=='e' && w.at(i+1)=='a'  || w.at(i+1)=='i' || w.at(i+1)=='u' || w.at(i+1)=='o' || w.at(i+1)=='y')
		{
			cout<<"No"<<endl;
			break;
		}
		if(w.at(i)=='i' && w.at(i+1)=='a' || w.at(i+1)=='e' || w.at(i+1)=='u' || w.at(i+1)=='o' || w.at(i+1)=='y')
		{
			cout<<"No"<<endl;
			break;
		}
		if(w.at(i)=='o' && w.at(i+1)=='a' || w.at(i+1)=='e' || w.at(i+1)=='i' || w.at(i+1)=='u' || w.at(i+1)=='y')
		{
			cout<<"No"<<endl;
			break;
		}
		if(w.at(i)=='u' && w.at(i+1)=='a' || w.at(i+1)=='e' || w.at(i+1)=='i' || w.at(i+1)=='o' || w.at(i+1)=='y')
		{
			cout<<"No"<<endl;
			break;
		}	 	
		if(w.at(i)=='y' && w.at(i+1)=='a' || w.at(i+1)=='e' || w.at(i+1)=='i' || w.at(i+1)=='u' || w.at(i+1)=='o')
		{
			cout<<"No"<<endl;
			break;
		}
	}
	cout<<i<<endl;
	if(i==w.size()-1)
	cout<<"Yes"<<endl;

	
	return 0;
}
