#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<float> v(1001);
	int t;
	cin>>t;
	
    for(int i=0;i<t;i++) cin>>v[i];
    float sum=0;
    for(int i=0;i<t;i++)
    {
    	sum +=v[i];
    }
    float avg = float(sum)/t;
    
    cout<<avg<<endl;
}
