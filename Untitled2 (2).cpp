#include<iostream>
using namespace std;
int main()
{
	cin>>n>>k;
	if(n>k)
	{
		int m;
		m=n%k;
		while(m!=k)
		{
			m++;
		    k--;
		    q++;
		    if(m<k)
		    {
		    	m++;
		    	while(m==k)
		    	{
		    		k--;
		    		q++;
		    		
				}
			}
		}
	}
}
