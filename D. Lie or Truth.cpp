#include <bits/stdc++.h>
using namespace std;

 
int main(void) {
	int n, l,r,ls=-1,lr=999999,i;
	scanf("%d %d %d",&n,&l,&r);
	int a[n+1], b[n+1];
 
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++) scanf("%d",&b[i]);
 
 
	for(i=0;i<n;i++){
 
		if(ls==-1){
			if(a[i]!=b[i]){
				ls = i+1;
			}
		}
		if(lr==999999){
			if(a[n-i-1]!=b[n-i-1]){
				lr = n-i;
			}
		}
	}
	if(ls==-1 && lr==999999){
		printf("TRUTH\n");
	}else if(l<=ls &&r>=lr){
		printf("TRUTH\n");
	}else{
		printf("LIE\n");
	}
 
	return 0;
}
