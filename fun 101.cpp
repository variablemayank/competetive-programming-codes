#include <bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin>>q;
	while(q--){
		vector<char> v;
		v.clear();
		string s;
		cin>>s;
		if(s.size()==0 || s.size()==1){
			cout<<0<<endl;
			continue;
		}
		int ans=0;
		for(int i=0;i<s.size();i++){

				char x=s[i];
				v.push_back(x);

		}
		int i=0;
		while(v[i]=='l'){
			v[i]='z';
			i++;
		}
		int j=v.size()-1;
		while(v[j]=='r'){
			v[j]='z';
			j--;
		}
		for(int i=0;i<v.size();i++){
			if(v[i]=='l'|| v[i]=='r'){
				ans++;
			}
		}
		cout<<ans<<endl;
	
	}
}
