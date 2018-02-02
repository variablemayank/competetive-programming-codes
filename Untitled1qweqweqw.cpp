#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    set<int> s;
    set<int> s1;
    for(int a0 = 0; a0 < n; a0++){
        int x;
        int y;
        cin >> x >> y;
       s.insert(x);
       s1.insert(y);
       
    }
    if(s.size() == 1 || s1.size()==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}

