#include <bits/stdc++.h>
using namespace std;

const int maxi =400000;
int phi[maxi];
void generatingphi()
{
    phi[1] =1;
    for(int i=1;i<maxi;i++)
    {
        if(phi[i]==0)
        {
            phi[i] = i-1;  //considering the prime properties of eulerian
                          // If p- a prime number, then \ Phi (p) = p-1.
           for(int j=(i<<1);j<maxi;j+=i) // (i<<1) is sameas calculating the power  2^i;
           {
               if(!phi[j]) phi[j] =j; // checking if zero then updating the value to j;
               
               phi[j] = (phi[j]/i)*(i-1);  // is same as the formula of calculating phi ie
                                            // phi(i) = n*(1-1/pi)*(1-1/pi+1).....
           }
        }
    }
}
int main()
{
    generatingphi();  //please wait the phi has been generated so get the value Loading... :D hehe
    
     long long  solution[400000];
        for(int i =1;i<maxi;i++)
        {
            for(int j=2;i*j<maxi;j++)     // taking pair ie 1,2
            {
                solution[i*j] += i*phi[j];
            }
          
        }
            for(int i=2;i<maxi;i++)
            {
                solution[i] += solution[i-1];
            }
            
            
            // test case lena hai ab
            
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            cout<<solution[n]<<endl;
        }
     //bye bye   
}

