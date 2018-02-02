#include<stdio.h>
int main(){
	int zaid[10000];
	int l;
	printf("enter the limit");
	scanf("%d",&l);
	for(int j=0;j<l;j++){
		zaid[j]={j+1};
	}
	printf("%d,%d,%d,%d,",2,3,5,7);
	for(int i=1;i<l;i++){
	if(zaid[i]%2!=0&&zaid[i]%3!=0&&zaid[i]%5!=0&&zaid[i]%7!=0){
 		printf("%d,",zaid[i]);}
	}
}
