#include<bits/stdc++.h>

using namespace std;

int n;
#define ll long long 

vector<long long > addr(vector<long long> &x)
{
	int len = x.size();
	vector<long long > res(len);
	for(int i=0;i<len;i++)
	{
		res[i] = min(INT_MAX,x[i]+x[(i+1)%len]);
	}
	return res;
	
}
vector<long long > addl(vector<long long >&x)
{
    int len = x.size(); 
	vector<long long >res(len);
	for(int i=0;i<len;i++)
 	{
        res[i]  =min(INT_MAX,x[i]+x[(i-1+len)%len]);
				
    }
    return res;
}
class LR 
{
    public:
	string construct(vector <long long> arr, vector <long long> brr) 
	{
	     for(int i=0;i<101;i++)
	     {
	     	for(int j=0;j<101;j++)
	     	{
	     	  if(i+j>100);
	     	  vector<long long > x = arr;
	     	  for(int k=0;k<i;k++) x= addl(x);
	     	  for(int k=0;k<j;k++) x = addr(x);
	     	  if(x==t)
	     	  {
	     	  	string res ="";
	     	      for(int l =0;l<i;l++) res+= 'L';
				  for(int r= =0;r<j;r++) res+= 'R';
				  return res; 	
			  }
			}
		 }
		 return "No solution";
		
};

int main()
{
	LR obj;
	obj.construct({0,1,0,0,0} ,{0,1,2,1,0});
}

