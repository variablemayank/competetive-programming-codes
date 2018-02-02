#include<bits/stdc++.h>
using namespace std;
 
const int maxi = 10000007;
vector<int >vec(maxi);
 
void binary_search(int left,int right ,int key)
{
	//cout<<left<<right<<endl;
	bool flag = false;
	while(left<=right)
	{
		int mid = (left+right)/2;
		if(vec[mid]==key)
		{
			printf("YES ");
			printf("%d\n",mid);
			flag = true;
			break;
		}
		else if(key<vec[mid])
		{
			right = mid-1;
		}
		else
		{
			left = mid+1;
		}
	}
	if(flag == false)
	{
	
	printf("NO ");
	printf("%d\n",left);}
}
 
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
   // cout.tie(0);
	int n;
	scanf("%d",&n);
 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&vec[i]);
	}
	int query;
	scanf("%d",&query);
	while(query--)
	{
		int val;
		scanf("%d",&val);
	    binary_search(0,n-1,val);
	}
 
}

