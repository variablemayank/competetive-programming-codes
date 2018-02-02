#include <iostream>
#include <string>
 
using namespace std;
 
long long int a = 0 , b = 0 , c = 0;
 
void Subseq(string &s,int len){
    for(int ind = len-1;ind>=0;ind--){                
 
        int item = (s[ind]-'0');                    
 
        if(item % 4 == 0){                    
            a=a*2;                
            b=b*2;
            c=c*2;
        }
        else if(item % 4 == 1){
            int a1=a,b1=b,c1=c;
            a+=c1;
            b+=a1;
            c+=b1;                    
        }
        else if(item % 4 == 2){
            int a1=a,b1=b,c1=c;
            a+=b1;
            b+=c1;
            c+=a1;                    
        }
 
        
        if(item % 8==0)
        a++;
        else if(item % 4==1 && item % 2 == 0)
        b++;
        else if(item % 4==2 && item % 2 == 0)
        c++;                                
    }
}
int main()
{
    int T;
 
    //freopen("input.txt","r",stdin);
    //freopen("out.txt","w",stdout);
        cin >> T;
        string s;
        int len;
        cin >> s;
        len = T;    
        a = b = c = 0;
        Subseq(s,len);
        cout << a << endl;
 
    return 0;
}
