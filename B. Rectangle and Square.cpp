#include<bits/stdc++.h>
using namespace std;

int x[8],y[8];

double dist(int i ,int j)
{
	return ((x[i]-x[j])*(x[i]-x[j]) +(y[i]-y[j])*(y[i]-y[j]));
}

vector<int> a;


int main()
{
    for(int i=0;i<8;i++)
    {
   	  cin>>x[i]>>y[i];
	}	
	
	for(int i1 =0 ; i1<8;i1++)
	{
		for(int i2=0;i2<8;i2++)
		{
			
			for(int i3=0;i3<8;i3++)
			{
				for(int i4=0;i4<8;i4++)
				{
				    if(i1 !=i2 && i1!=i3 && i1!=i4 && i2!=i3 && i2!=i4 && i3!=i4)
				    {
				    	 if(dist(i1,i2)!=dist(i2,i3) || dist(i3,i2)!=dist(i3,i4) || dist(i3,i4)!=dist(i4,i1) || dist(i1,i4)!=dist(i2,i1))
                         continue;

                  if (((x[i2]-x[i1])*(x[i4]-x[i1])+(y[i2]-y[i1])*(y[i4]-y[i1]))!=0) continue;
        
                  if (((x[i2]-x[i1])*(y[i4]-y[i1])-(y[i2]-y[i1])*(x[i4]-x[i1]))==0) continue;
                   a.clear();
				    	for(int i=0;i<8;i++)
				        if(i!=i1 && i!=i2 && i!=i3&& i!=i4)
				        {
				        	a.push_back(i);
						}
						sort(a.begin(),a.end());
						
						do
						{
						if(dist(a[0],a[1])!=dist(a[2],a[3]) || dist(a[1],a[2])!=dist(a[0],a[3])) continue;
           				if ((x[a[1]]-x[a[0]])*(x[a[3]]-x[a[0]])+(y[a[1]]-y[a[0]])*(y[a[3]]-y[a[0]])!=0) continue;
                        if ((x[a[1]]-x[a[0]])*(y[a[3]]-y[a[0]])-(y[a[1]]-y[a[0]])*(x[a[3]]-x[a[0]])==0) continue;
                         cout<<"YES"<<endl<<i1+1<<' '<<i2+1<<' '<<i3+1<<' '<<i4+1<<endl<<a[0]+1<<' '<<a[1]+1<<' '<<a[2]+1<<' '<<a[3]+1<<endl;
                         return 0;
						}
						while(next_permutation(a.begin(),a.end()));
						
					}
				
				}
				
			}
		}
	}
	cout<<"NO";
	return 0;
}
