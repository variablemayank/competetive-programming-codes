#include<bits/stdc++.h>
using namespace std;

int arr[1000006];
int main()
{
    int n,k;
    
    
    cin>>n;
    
    for(int j=0;j<n;j++) cin>>arr[j];
    
    
  //  cin>>k;
   // cout<<"k"<<k<<endl;
    std::deque<int>  Qi(k);
 
    
    int i;
    for (i = 0; i < k; ++i)
    {
       
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();  
      
        Qi.push_back(i);
    }
 
  
    for ( ; i < n; ++i)
    {
       
        cout << arr[Qi.front()] << " ";
 
      
        while ( (!Qi.empty()) && Qi.front() <= i - k)
            Qi.pop_front();  
      
        while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
 
         
        Qi.push_back(i);
    }
       cout << arr[Qi.front()];
       return 0;
 
}
