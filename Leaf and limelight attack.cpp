#include<iostream>
using namespace std;
long long DiagSum(long long maxtrixdim) {
   if (maxtrixdim < 1) return 0;
   int curelement = (maxtrixdim ) * maxtrixdim + 1;
   int result = curelement;
   while (maxtrixdim--> 0) {
   
     curelement -= (maxtrixdim + maxtrixdim);
     result += curelement;
   }
   
   return result;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout<<DiagSum(n-1);
		
	}
}
