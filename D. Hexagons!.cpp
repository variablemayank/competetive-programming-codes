#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	if(t==0) return cout<<"1",0;
	long long sum =0;
   /* for(int i=1;i<=t;i++)
    {
    	sum+= 6*i;// Giving TLE 
    	So modifide code will be
	}
	*/
	
	//Arithmetic Progression of sum on n terms is (first terms and lastt) *n and divide by 2 gotcha answer is
   //int first_term = 6;
   ///int last_term = 6*t;
    
	sum = (1+t*1ll)*3*1ll*t;
	cout<<sum+1<<endl;
	return 0;
	
}
