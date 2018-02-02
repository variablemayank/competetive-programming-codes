#include<iostream>

#include<string.h>
using namespace std;
int main()

{
    char str[80];

    int i;

    cout<<"\n enter string:";

   
   cin.getline(str,80);

    int n=strlen(str);

    cout<<"\n lenght is:"<<n;


    return 0;

}
