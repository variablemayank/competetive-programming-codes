#include<bits/stdc++.h> 
using namespace std;

#define ll long long
const int maxi =1000000;
int arr[maxi];

int main()
{
    //ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>arr[i];
		
		int *solve = new int[n];
	  
		std::stack<ll> s;
	       solve[0] =1; // the number of contiguous towers just to the left of the 
		  s.push(0);     // given tower whose height is less than or equal to the height of the given tower) + 1}.
	                    // because this is first element 
		for(int i=1;i<n;i++)
		{
 			
			while(!s.empty() &&arr[s.top()]<= arr[i])
			{
               s.pop();
			}
		  
		  if(s.empty())
		  {
		     solve[i] = i+1;        // this tell us there are i+1 element less than the current element
		  }
		  else
		  {
		  	solve[i]  = i- s.top();    }   // if there are any element left and greater than the current element so the element will be 
		  	                      // index - that top valuee which will also contain index so
		  	                            // i think u will get 
		  s.push(i);   // consider for every value we are pushing the current index for the next i+1 query :D
 		}
		for(int i=0;i<n;i++)
		{
			cout<<solve[i]<<" ";
		}
		cout<<endl; 
    }
    return 0;
}
