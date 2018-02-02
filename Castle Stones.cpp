#include<bits/stdc++.h>
using namespace std;

#define sc(x) scanf("%d",&x) 
#define pr(x) printf("%dn",x);
#define all(x) x.begin(),x.end()

int main()
{
	int t;
	sc(t);
	while(t--)
	{
		int weigh,n;
		vector<int> v(1001);
		
		sc(weigh);
		sc(n);
		
		for(int i=0;i<n;i++) scanf("%d",&v[i]);
		
		sort(all(v));
		
		int count =0;
		
	    int left=0,right=n-1;
	    
	    while(left<=right)
	    {
	    		
			
				if(v[left]+v[right]<=weigh)  
				{
				count++;
				left++;
				right--;
					
				}
			    else if(v[right]<=weigh)    
				{
					count++;
					right--;
				}
				
				
		}
		cout<<count<<endl;
	
	}
}
