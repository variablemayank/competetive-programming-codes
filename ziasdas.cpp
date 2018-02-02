#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] ={1,2,3,4,5,6};
	vector<int> zaid(arr,arr+6);
	
	vector<int> ::iterator it ;
	it = zaid.begin();
	 // cout<<it  // will give error 
	cout<<&it<<endl;   // prints the address
	for(it =zaid.begin(); it != zaid.end() ;it++)
	{
		cout<<*it<<" ";
	}
	
}
