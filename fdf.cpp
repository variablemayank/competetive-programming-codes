#include<iostream>
#include<algorithm>
using namespace std;
int power(int a,int b){
    int res = 1 ;
    while(b){
        if(b%2){
            res = (1LL * res * a) ;
        }
        b /= 2 ;
        a = (1LL * a * a) ;
    }
    return res ;
}
int main()
{
	int t;
	cin>>t;
	cout<<power(2,t)/2<<endl;
}
