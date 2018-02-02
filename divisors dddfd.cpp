#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int number,i,sum,num;
	int test_case,t=1;
	scanf("%d",&test_case);
	while(t<=test_case){
        scanf("%lld%lld",&number,&num);
		sum=0;
		int len,x;
		vector<int>divisor;
        if(number==1)printf("1\n");
        else {
            for(i=1;i<=sqrt(number);i++){
                if(number%i==0)divisor.push_back(i);
            }
        if(sqrt(number)*sqrt(number)==number){
            len = divisor.size();
            for(i=0;i<len-1;i++){
                x = number/divisor[i];
                divisor.push_back(x);
            }
        }
        else {
            len = divisor.size();
            for(i=0;i<len;i++){
                x = number/divisor[i];
                divisor.push_back(x);
            }
        }
        for(i=0;i<divisor.size();i++){
            if(divisor[i]%num!=0)sum+=divisor[i];
        }
        printf("%lld\n",sum);
        }
		t++;
	}
	return 0;
}
