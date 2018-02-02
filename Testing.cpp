    #include <stdio.h>  
    #include <iostream>  
    #include <map>  
    #include <set>  
    #include <bitset>  
    #include <list>  
    #include <stack>  
    #include <vector>  
    #include <math.h>  
    #include <string.h>  
    #include <queue>  
    #include <string>  
    #include <stdlib.h>  
    #include <algorithm>  
    //#define LL __int64  
    //#define LL long long  
    #define eps 1e-9  
    #define PI acos(-1.0)  
    typedef long long LL;  
    using namespace std;  
      
    const int maxn = 10010;  
      
    int p_num[maxn];  
    bool flag[maxn];  
    int sef[maxn];  
      
    LL num[maxn];  
      
    LL cal(LL n)  
    {  
        long long tmp = n;  
        return tmp*(tmp-1LL)*(tmp-2LL)*(tmp-3LL)/(24LL);  
    }  
      
    void init()  
    {  
        memset(flag,false,sizeof(flag));  
        memset(p_num,0,sizeof(p_num));  
      
        for(int i = 1; i < maxn; i++)  
            sef[i] = 1;  
      
        for(int i = 2; i < maxn; i++)  
        {  
            if(flag[i] == false)  
            {  
                for(int j = i; j < maxn; j += i)  
                {  
                    sef[j] *= i;  
                    p_num[j]++;  
                    if(j != i)  
                        flag[j] = true;  
                }  
            }  
        }  
    }  
      
    int main()  
    {  
       
        LL n;  
        LL a[maxn];  
        LL num[maxn];  
        init();
        
		for(int j=2;j<20;j++)
		cout<<sef[j]<<" ";
		  
        while(~scanf("%lld",&n))  
        {  
            memset(num,0,sizeof(num));  
            LL Max = 0;  
            for(int i = 0; i < n; i++)  
            {  
                scanf("%lld",&a[i]);  
                num[a[i]] ++;  
                Max = max(Max,a[i]);  
            }  
            if(n < 4)  
            {  
                printf("0\n");  
                continue;  
            }  
            for(int i = 2; i <= Max; i++)  
            {  
                for(int j = i+i; j <= Max; j += i)  
                    num[i] += num[j];  
            }  
      
            LL ans = 0;  
      
            for(LL i = 2; i <= Max; i++)  
            {  
                if(sef[i] == i)  
                {  
                    if(p_num[i] & 1)  
                        ans += cal(num[i]);  
                    else  
                        ans -= cal(num[i]);  
                }  
            }  
            ans = cal(n) - ans;  
            printf("%lld\n",ans);  
        }  
        return 0;  
    }  
