#include <bits/stdc++.h>

using namespace std;

int main(){
    long n;
    long x;
    long y;
    cin >> n >> x >> y;
    long arr[n][5];
    
        long latitude;
        long longitude;
        long height;
        long polongs;
        cin >> latitude >> longitude >> height >> polongs;
        long sum=0;
        for(long i=1;i<n;i++)
        {
        	long a,b,c,d;
        	cin>>a>>b>>c>>d;
        	if(c>height)
        	{
        		long diff= (latitude-a);
        		long diff1,diff2;
        		diff1 = (longitude-b);
        		if(diff<=x && diff1<=y) 
        		{
				sum+= (polongs+d);
        		latitude = a;
        		longitude= b;
        		height= c;
        		polongs=0; 
        	    }
			}
			else 
			{
				continue;
	
			}
		}
		cout<<sum;
    return 0;
}

