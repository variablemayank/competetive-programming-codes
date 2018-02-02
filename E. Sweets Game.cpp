	/*
	   00 01 02
	 03 04 05 06 
	07 08 09 10 11
     12 13 14 15 
	   16 17 18   */
	   
	#include<bits/stdc++.h>
	using namespace std;
	
	vector<int> v;
	bool win[(1<<19)];
	
	void  add(int a,int b, int c,int d, int e)
	{
		int arr[5] = {a,b,c,d,e};
		int i,j,k;
		
		for(int j=0;j<5;j++)
		{
			if(arr[j]!= -1)
			{
				for(int i=0;i<j;i++)
				{
					int mask = 0;
					for(int k =i;k<=j;k++)
					{
						mask |= (1<<arr[k]);
					}
					v.push_back(mask);
				}
			}
		}
    } 
    
    int main()
    {
    	// Horizontal
    	add(0,1,2,-1,-1);
    	add(3,4,5,6,-1);
    	add(7,8,9,10,11);
    	add(12,13,14,15,-1);
    	add(16,17,18,-1,-1);
    	
    	//Diagonal from left
    	add(0,3,7,-1,-1);
    	add(1,4,8,12,-1);
    	add(2,5,9,13,16);
    	add(6,10,14,17,-1);
    	add(11,15,18,-1,-1);
    	
    	//Diagonal from right
    	add(2,6,11,-1,-1);
    	add(1,5,10,15,-1);
    	add(0,4,9,14,18);
    	add(3,8,13,17,-1);
    	add(7,12,16,-1,-1);
    	
    	for(int i=0;i<19;i++)
    	{
    		v.push_back(1<<i);
		}
	//	Note that a move move can be done in a state mask if ,
	// and doing this move leads to the state 
		for(int i=0;i<(1<<19);i++)
		{
			for(int j=0;j<v.size();j++)
			{
				if( ((i & v[j]) == v[j])&& !win[i^v[j]])
				win[i] = true;
			}
		}
		int mask =0;
		string s;
		for(int i=0;i<19;i++)
		{
			cin>>s;
			if(s== "O") mask|= (1<<i);
		}
		if(win[mask]) cout<<"Karlsson";
		else cout<<"Lillebror";
		return 0;
  	}
