#include<iostream>
#include<vector>
using namespace std;
int solution(int n)
{
	int start =5,sum=0;
	while(start<=n)
	{
		int c= n/start;
	    sum += c;
	    start*=5;
	}
	return sum;
}
int main()
{
	ios::sync_with_stdio(false);
	int t,count=0;
	cin>>t;
	vector<int>vec;
    for(int i=1;i<=10000000;i++)
    {
	
    int x= solution(i);
    
	if( t == x )
	{
		count++;
		vec.push_back(i);
	}
    }
    
	cout<<count<<endl;
	for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";

}
