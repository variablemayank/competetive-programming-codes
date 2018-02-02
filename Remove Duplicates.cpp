#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	int k=(int)a.length();
	int hash[26]={0};
	for(int i=0;i<k;i++){
		hash[a[i]]=1;
	}
	int j=0;
	for(int i=0;i<k;i++){
		if(hash[a[i]]==1){
			hash[a[i]]--;
			a[j]=a[i];
			j++;
		}
	}
	for(int i=0;i<j;i++){
	
		cout<<a[i];
	}
	return 0;}
