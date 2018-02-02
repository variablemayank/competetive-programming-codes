#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

void initialise()
{
	bool prime[60];
	memset(prime,true,sizeof(prime));
	for(int A=2;A<=50;A++)
	{
		if(prime[A]==true)
		{
			vec.push_back(A);
			for(int B=2;B*A<=50;B++)
			prime[A*B]=false;
		}
	}
}
int main()
{
	initialise();
	string X;
	int cnt=0;
	cout<<vec[0]<<"\n";
    	fflush(stdout);
    for(int A=0;A<vec.size();A++)
    {
    	
    	cin>>X;
    	if(X=="yes")
    	{
    	cnt++;
        }
	}
    if(cnt>1)
    {
    cout<<"composite";
    	fflush(stdout);
    	
	}
    else
    {
    	cout<<"4";
    	cin>>X;	
		if(X=="yes")
		{
    	cnt++;
    	cout<<"9";
    	fflush(stdout);
    	cin>>X;
        }   
    	if(X=="yes")
    	{
		cnt++;
    	cout<<"25";
    	fflush(stdout); 
    	cin>>X;
        }
    	if(X=="yes")
    	{
    	cnt++;
    	cout<<"49";
    	fflush(stdout);
    	cin>>X;
        }
    	if(X=="yes")
        {
     	cnt++;
    	if(cnt>1)
    	{
    	cout<<"composite";
    	fflush(stdout);
    	return 0;
        }
    	else
    	{
    	cout<<"prime";
    	fflush(stdout);
        }
        }
	fflush(stdout);
	return 0;
   }
}
