#include<bits/stdc++.h>
using namespace std;

#define ll long long
int arr[10050][50];
int row,col;

ll kadane(ll brr[],int start,int finish,int n)
{
	ll sum =0,maxsum =INT_MIN;
	
	int fnish= -1;
	int local_start =0;
	for(int i=0;i<n;i++)
    {
    	sum ^= brr[i];
        if(sum>maxsum)
        {
        	maxsum = sum;
        	start = local_start;
        	finish = i;
		}
	}
	
	return   maxsum;
}
void solve()
{
 ll max_sum = INT_MIN, final_left,final_right,final_top,final_bottom;
 
 int left,right,i;
 
 long long temp[row] ,sum , start ,finish;
 
 for(left =0 ; left<col ; left++)
 {
 	   memset(temp,0,sizeof(temp));
 	
 	for(right = left ; right < col ; right++)
 	{
 	      for(i = 0 ; i < row ; i++)
		   temp[i] ^= arr[i][right]; // the current array which is
		                           // to be copied in the new array
          sum = kadane(temp,start,finish,row);
		  
		  if(sum > max_sum)
		  {
		     max_sum = sum;
			 final_left =left;
			 final_right =right;
			 final_top = start;
			 final_bottom = finish;
		  }	
	}
  }
  
cout<<max_sum;
 
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin>>row>>col;
	for(int i=0;i<row;i++)
	for(int j=0;j<col;j++) 
	cin>>arr[i][j];
	
	solve();
	return 0;
	
}
