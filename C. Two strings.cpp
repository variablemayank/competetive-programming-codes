#include<bits/stdc++.h>
using namespace std;

const int maxi =1e5+5;

int main()
{
	string b,a;
	cin>>b>>a;
    
    int n= b.length(); //first string 
    vector<int> pref(n+1),suff(n+1);  // prefix array and suff array
    int at =0;    
    pref[0]= at;    // first 0->0 is zero
    for(int i=1;i<=n;i++)
    {
         if(at<a.size() && b[i-1]==a[at]) 
		 ++at;
         pref[i]= at;
	}
	
	if(at== a.size()) return cout<<a,0;
	
		at = a.length();
	suff[n]= at; // maximum frequency found above 

	for(int i=n-1;i>=0;i--)
	{
		if(at>0 && b[i]== a[at-1])
		 --at;
		suff[i] = at;
	}
	//cout<<a<<" "<<b;
	int maxx= -10000000 ,p = -1,s=-1;
	for(int i=0;i<=n;i++)
	{
		
		 int val = pref[i]-suff[i];
	//	 cout<<val;
		 if(maxx<val)
		 {
		// 	cout<<i<<" ";
		 	maxx = val;
		 	p = pref[i];
		 	s = suff[i];
		 }
	}
	//cout<<p<<" "<<s<<endl;
	//for(int i=0;i<8;i++) cout<<pref[i]<<' ';
     //cout<<endl;
	//for(int i=0;i<8;i++) cout<<suff[i]<<' ';
	//cout<<p<<" "<<s<<endl;
	string soln = string(a.begin(),a.begin()+p)+ 
           string(a.begin()+s,a.end());
           if(soln =="")cout<<"-";
           else
	cout<<soln<<endl;
}
