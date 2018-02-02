#include<iostream>
#include<set>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
set<string>names;
for(int i=0;i<n;i++){
string s;
cin>>s;
names.insert(s);
}
set<string>::iterator it;
for(it=names.begin();it!=names.end();it++){
cout<<*it<<endl;
}
}
}
