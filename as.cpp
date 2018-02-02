#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
  string s;
  getline(cin, s);
    bool whatif = true;
    int a = 0, dots = 0;
    for (int i = a; i < s.find("."); i++) {
        if (s[i] < '0' || s[i] > '9') {
        whatif = false;
            break;
        }
    int ip = stoi (s);
        if (ip > 255 || ip < 0) {
 
            whatif = false;
            break;
        }
        else {
        continue;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
        dots++;
        }        
        if (s[i] == '.' && s[i-1] == '.') {
        whatif = false;
        }
    }
    if (dots != 3) {
    whatif = false;
    }   
    if (s[0] == '.' || s[s.size() - 1] == '.') {
    whatif = false;
    }
    if (whatif) {
    cout << "YES";
    }
    else {
    cout << "NO";
    }
 
  return 0;
}
