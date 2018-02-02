#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    scanf("%d%d",&n,&a);
    for(int i=0; i<n-1;++i) { 
            scanf("%d",&b);
        if((a = b-a)<0)
            break;
    }
    puts(a?"NO":"YES");
    return 0;
}
