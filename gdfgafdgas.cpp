	#include <bits/stdc++.h>
	using namespace std;
	typedef long long int neha;
	typedef long long neha1;
	
	int main(){
	
		int test;
		scanf("%d",&test);
		while(test--){
				char supriya ='1';
	           char priya='0';
			neha ans=0;
			string s;
			cin>>s;
			neha j=s.size();
			j=j-1;
			neha pos=s.size();
			pos=pos-1;
			
		neha  ladkikabaap=0;
			while(j>=0){
				if(s[j]==priya)
				{
					j--;
					continue;
				}
				else{
					if(s[j]==supriya)
					{
						if(j==pos);
						else if(j!=pos){
					ans+=pos-j+ladkikabaap+1;	
					if(j-1>=0 && s[j]==s[j-1] && s[j]==supriya);
					else
					ladkikabaap++;
					}
					j--;
					pos--;
				}
			}
		}
			printf("%lld\n",ans);
			
		}
	}
