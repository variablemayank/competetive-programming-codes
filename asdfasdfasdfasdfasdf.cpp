#include<algorithm> 
#include<string> 
#include<iostream> 
using namespace std; 
class LittleElephantAndDouble 
{ 
  public: 
  int  getAnswer(vector <int> A) 
  { 
    for ( int i = 0 ; i < A.size() ; i++ ) 
    { 
      while ( A[i] % 2 == 0 ) 
      { 
        A[i] /= 2; 
      } 
    } 
    sort(A.begin() , A.end()); 
    if ( A[0] == A[A.size() - 1]) return cout <<"YES",0; 
    else return cout<<"NO",0; 
  } 
};

int main()
{
	int n;
	vector<int> vec;
	while(true)
	{
		int n;
		cin>>n;
		if(n==-1)
		break;
		vec.push_back(n);
	}

	LittleElephantAndDouble obj;
	obj.getAnswer(vec);
	return 0;
}
