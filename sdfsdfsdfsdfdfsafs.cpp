#include<bits/stdc++.h>
using namespace std;


using namespace std;


class MakePalindrome 
{
public:
	int arr[27];
	vector <string> constructMinimal(string card) 
	{
	    
	
		 
		 memset(arr,0,sizeof(arr));
		 for(int i=0;i<card.size();i++)
		 {
		     arr[card[i]-97]++;
		 }
		 
		 vector<string> vec;
		 for(int i=0;i<26;i++)
		 {
		     
		 	if(arr[i]>0)
		 	{
			 
		 	string ans;
		 	for(int j=0;j<arr[i];j++)
		 	{ 
		 	    ans +=  97+i;
				 	
			} 
			vec.push_back(ans);
		     }
		 }
		 
		for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
	}
};

int main()
{
	MakePalindrome obj;
	obj.constructMinimal("aabb");
}
