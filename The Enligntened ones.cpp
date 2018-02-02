#include<bits/stdc++.h>
using namespace std;
vector<int> A;

int check(int num,int k)
{
	int prev=A[0]+num;
	k--;
	for(int i=1;i<A.size();i++)
	{
		if(prev+num>=A[i]) continue;
		if(k==0) return 0;
		prev=A[i]+num;
	k--;
    }
    return 1;
}
int main()
{
	int n,k;
	cin>>n>>k;
	A.resize(n);
	for(int i=0;i<n;i++) cin>>A[i];
	sort(A.begin(),A.end());
	
	int l=0,h= int(1e7),mid,p=-1;
	while(l<=h)
	{
		mid = (l+h)/2;
	 int value =check(mid,k);
	 if(check(mid,k)&&check(mid-1,k)==0) break;
	 if(value==0)
	 {
	 	p=mid;
	 	l=mid+1;
	 }
	 else 
	 h= mid-1;
	}
	cout<<mid<<endl;
	return 0;
}
