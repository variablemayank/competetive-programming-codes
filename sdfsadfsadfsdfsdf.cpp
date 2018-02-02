#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n,num,mov,numtop;
    cin>>n;
    string str;
    int cn = 1;
    mov = 0;
    stack <int> mystack;
    n = n*2;
    while(n--){
     //   fflush(stdin);
        getline(cin, str);
        if(str[0] == 'a'){
            string s = str.substr(4,str.length()-3);
            num = 0;
            stringstream sp(s);
            sp>>num;
            mystack.push(num);
 
        }else{
            if(!mystack.empty() && cn == mystack.top()){
                mystack.pop();
            }else if(!mystack.empty() && cn != mystack.top()){
                cout<<mystack.top()<<endl;
                while(!mystack.empty())
                    mystack.pop();
                mov++;
            }
            cn++;
        }
    }
    cout<<mov<<endl;
    return 0;
}
