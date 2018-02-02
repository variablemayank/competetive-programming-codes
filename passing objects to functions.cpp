#include<bits/stdc++.h>
using namespace std;

class Example
{
  private :
  int real;
  int imag;
  public :
   Example(): real(0),imag(0){}
   void readdate()
   {
   	 cout<<"Enter the value of real and imaginary values\n";
   	 cin>>real>>imag;
   }
   void getsum (Example c1, Example c2)
   {
   	  real  = c1.real +c2.real;
   	  imag = c2.imag + c2.imag;
   }
   void displaysum()
   {
   	 cout<<"The sum is "<<real<<" +"<<imag;
   }
};
int main()
{
	Example a1,a2,a3;
	a1.readdate();
	a2.readdate();
	a3.getsum(a1,a2);
	a3.displaysum();
}
