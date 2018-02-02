#include<bits/stdc++.h>
using namespace std;

int arr[100005];
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int n;
	cin>>n;
	for(int i=0 ;i<n;i++) cin>>arr[i];
	
	
	vector<int>vec;
   if(a==arr[0])
   {
    int x;
    x =a;
    for(;x<=c;x+=c)
    {
    	vec.push_back(x);
	}
	
	}
	
	} 
   if(a<arr[0])
   {
   	  cout<<a;
   	  return 0;
   }
   if(a>arr[0])
   {
   	cout<<arr[0]-1;
   	return 0;
   }
}
