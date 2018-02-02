#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		set <int> s;
		s.clear();
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			s.insert(x);
		
	}
	int i=1;
	int count =0;
    for(int i=1;i<=n;i++)
    {
    	if(s.find(i)==s.end())
    	count++;
	}
	cout<<count<<endl;
		
	}
}
