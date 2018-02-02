#include<bits/stdc++.h>
#include<set>
#define all(c) c.begin(),c.end()
#include<conio.h>
using namespace std;
int main()
{
   vector<int > v;
   for(int i=1;i<=10;i++)
   {
   	int n;
   	cin>>n;
   	v.push_back(n);
   }
   set<int> s(all(v));
   vector<int > v2(all(s));
   for(vector<int>:: iterator it=v2.begin();it!=v2.end();it++) 
   {
   	cout<<*it<<" ";
   }
   getch();
}

