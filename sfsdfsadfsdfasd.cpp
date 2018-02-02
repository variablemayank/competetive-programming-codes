	#include<bits/stdc++.h>
	using namespace std;
	
	int main()
	{
		ios_base::sync_with_stdio(false);
		int t;
		cin>>t;
		bool check[1000][1000] = {false};
		
		int k=0;
		bool flag = true;
		for(int i=1;i<=95;i++)
		{
			for(int j=i+2;j<=95;j++)
			{
			   check[i][j+1] = true;
			   check[j+1][i] = true;
			   check[i+1][j+2] = true;
			   check[j+2][i+1] = true;
			   k++;
			   if(k==t)
			   {
			   	flag = false;
			   	break;
			   }
			}
			if(flag == false) break;
		}
		cout<<95<<endl;
		for(int i=1;i<=95;i++)
		{
			for(int j=1;j<=95;j++)
			{
			
		    if(check[i][j]==true) cout<<"Y";
		    else cout<<"N";
		    }
		    cout<<endl;
		}
		
	}
