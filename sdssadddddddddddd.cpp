#include<bits/stdc++.h>
using namespace std;

int Arr[100005];



    int root(int i)
    {
        while(Arr[ i ] != i)           //chase parent of current element until it reaches root
        {
         i = Arr[ i ];
        }
        return i;
    }


    /*modified union function where we connect the elements by changing the root of one of the elements*/

    int union1(int A ,int B)
    {
        int root_A = root(A);       
        int root_B = root(B);  
        Arr[ root_A ] = root_B ;       //setting parent of root(A) as root(B)
    }
    bool find(int A,int B)
    {
        if( root(A)==root(B) )       //if A and B have the same root, it means that they are connected.
        return true;
        else
        return false;
    }

int main()
{
	for(int i=0;i<=100005;i++) Arr[i] =i;
	
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		if(root(u)!=root(v))
		 union1(u,v);
	}

	for(int i=1;i<=n;i++)
	{
		int count =0;
	for(int j=i+1;j<=m;j++)
	{
		if(Arr[i] ==j) count++;
	}
	cout<<count<<endl;
    }
}
