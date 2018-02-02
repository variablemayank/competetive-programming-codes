	#include<bits/stdc++.h>
	using namespace std;
	
	int parent[200005];
	int arr[200005];
	
	void init()
	{
		for(int i=1;i<=200005;i++) parent[i] =i;
	}
	int get(int x)
	{
		if(parent[x]==x) return x;
		return (parent[x] =get(parent[x]));
	}
    
	void  merge(int a,int b)
	{
		a = get(parent[a]);
		b= get(parent[b]);
		parent[a] = b;
	}
	
	
	int main()
	{
		init();
		int n;
		cin>>n;
		int root=0;
	    for(int i=1;i<=n;i++)
	    {
	       cin>>arr[i];
	      if(arr[i]==i) root =i;
		}
		int ans[200005];
	    for(int i=1;i<=n;i++)
	    {
	    	if(get(i)==get(arr[i]))
	    	{
	    		// if root value will be
	    		//zero when no value will be
	    		//connected to itself
	    		if(root!=0)
	    		{
	    			// simply make connect to the root node
	    			ans[i]= root;
				}
				else
				{
					// in the whole array there is no root node
					// we have to make any element root node 
					// that why we randomly make i parent of 
					// b[i]  to i
				    ans[i] = i;
					root = i; // now our root node is i 
				}
			}
			else
			{
				// simply the i is not equak to arr[i] means no 
				// need to change and question is also 
				// you to make minimal changes 
				ans[i] = arr[i]; 
			}
			/// make parent of i as arr[i] parent
			merge(i,arr[i]);
			
		}
		int count =0;// no the no of minimal changess
		for(int i=1;i<=n;i++) if(arr[i]!=ans[i]) count++;
		cout<<count<<endl;
		for(int i=1;i<=n;i++)
		{
			cout<<ans[i]<<" ";
		}
	}
