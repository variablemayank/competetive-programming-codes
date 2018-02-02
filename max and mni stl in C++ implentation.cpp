#include<iostream>
#include<algorithm>
#include<vector>
#define all(c) c.begin c.end
using namespace std;
int main()
{
	int data[5]={1,2,3,4,5};
	vector<int> X(data,data+5);
	int v1 = *max_element(X.begin(), X.end()); // Returns value of max element in vector
int i1 = max_element(X.begin(), X.end()) – X.begin; // Returns index of min element in vector
int v2 = *min_element(data, data+5); // Returns value of max element in array
int i3 = min_element(data, data+5) – data; // Returns index of min element in array
cout<<i1<<v1<<i3<<v2;
return 0;





}

