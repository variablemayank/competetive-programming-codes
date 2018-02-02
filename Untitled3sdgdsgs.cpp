#include<iostream>
using namespace std;
int main()
{
int a,b;


string num[10] = {" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; 


cin>>a>>b;


for(a; a<=b; a++)


{


    if((a>=1) &&(a<=9)){


        cout<<num[a]<<"\n";


    }


     else {


        if(a%2 == 0){


            cout<<"even"<<"\n";


        }



        else{


            cout<<"odd\n";


        }       


    }



} 
return 0;
}



