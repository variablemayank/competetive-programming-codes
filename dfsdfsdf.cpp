#include<iostream>
using namespace std;
int main()
{
	int avg;
	
		int phy=80,chm=90,mth=75,eng=85,comp=80;
	avg =(phy+chm+mth+eng+comp)/5*(100);
	if(avg>=60)
	{
	cout<<"first devision";
    }
  else  if(avg<60 && avg>50)
   {
     cout<<"second devision";
   }
   else if(avg <=50 && avg>40)
   {
   cout<<"third devision\n";
   }
   else
   {
   	cout<<"fail";
   }
   
}

