#include <bits/stdc++.h>
using namespace std;

#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
char str[100005];
int n, lps[100005], cnt[100005];
bool mark[100005];


int main(){
    
    cin>>str;
    n = strlen(str);
    
    lps[0] = 0;
    for(int i=1;i<n;i++){
        int j = lps[i-1];
        while(j > 0 && str[i] != str[j])    j = lps[j-1];
        if(str[i] == str[j])    j++;
        lps[i] = j;
    }
    for(int i=0;i<=n;i++)
    {
    	 trace2(i,lps[i]);
	}
    int ans = 0;
    
    int j = n;
    while(j > 0){
        mark[j-1] = true;
        j = lps[j-1];
        ans++;
    }


    for(int i=0;i<n;i++)
        if(lps[i] > 0)
            cnt[lps[i]-1]++;

    //if position i has max prefix suffix as j, it will also have the series
    //starting with j as suffix
    for(int i=n-1;i>=0;i--){
        if(lps[i] > 0)  cnt[lps[i]-1] += cnt[i];
    }
    
    
    cout<<ans<<endl;
    for(int i=0;i<n;i++)
        if(mark[i]) cout<<(i+1)<<" "<<cnt[i]+1<<endl;
    return 0;
}
