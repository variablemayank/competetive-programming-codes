#include<stdio.h>
int main(){
int length,count=0;
scanf("%d",&length);
int zaid[length];
for(int a=0;a<length;a++){
scanf("%d",&zaid[a]);}
if(length%2!=0){
printf("Friend 2");
}else{
for(int b=0;b<length;b++){
if(zaid[b]%2==0) count++;
}if(count>length/2) printf("Friend 1");
else printf("Friend 2");
}
}
