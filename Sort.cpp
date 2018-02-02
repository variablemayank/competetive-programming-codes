#include<bits/stdc++.h>
using namespace std;
#define MAX 10001
vector<int> vec;
int main()
{
   int T;
   cin>>T;
   for(int i=0;i<T;i++)
   {
       int n; cin>>n; vec.push_back(n);
   }
   sort(vec.begin(),vec.end());
   for(int i=0;i<T;i++)
     cout<<vec[i]<<endl;
}
     
   
