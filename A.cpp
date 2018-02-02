#include <iostream>
#include <string>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   
    string  str1 ,str2;
    cin>>str1>>str2;

    size_t n = max(str1.size(), str2.size());
    if (n > str1.size())
        str1 = string(n-str1.size(), '0') + str1;
    if (n > str2.size())
        str2 = string(n-str2.size(), '0') + str2;


    string final(n+1, '0');

   
    char carry = 0;

    
    string::const_reverse_iterator s1 = str1.rbegin(), e = str1.rend(),
                                   s2 = str2.rbegin();
    string::reverse_iterator f = final.rbegin();

   
    for (; s1 != e; ++s1, ++s2, ++f)
    {
     
        char tmp = (*s1-'0')+(*s2-'0') + carry;
        if (tmp > 9)
        {
            carry = 1;
            tmp -= 10;
        }
        else
        {
            carry = 0;
        }
        *f = tmp + '0';
    }
    final[0] = carry + '0';

    n = final.find_first_not_of("0");
    if (n != string::npos)
    {
        final = final.substr(n);
    }

    cout<<final<<endl;
   }
}
