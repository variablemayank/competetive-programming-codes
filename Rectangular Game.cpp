	#include<bits/stdc++.h>
	using namespace std;
	
	int arr[105][105];
	int main()
	{
		int n;
		cin>>n;
		memset(arr,0,sizeof(arr));
		int max1 = 1e9;
		int max2 = -1000000;
        for(int i=0;i<n;i++)
        {
        	int a,b;
        	cin>>a>>b;
        	max1 = min(a,max1);
        	max2 = max(b,max2);
        	for(int i=1;i<=a;i++)
        	{
        		for(int j=1;j<=b;j++)
        		{
        			arr[i][j]++;
				}
			}
		}
		int maxvalue= -10000000;
		int count =0;
		for(int i=1;i<=max1;i++)
		{
			for(int j=1;j<=max2;j++)
			{
				if(arr[i][j]>maxvalue)
				{
					maxvalue= arr[i][j];
					count=1;
					continue;
				}
				if(maxvalue == arr[i][j])  count++;
			}
		}
	//	cout<<maxvalue;
		cout<<count<<endl;
	}
