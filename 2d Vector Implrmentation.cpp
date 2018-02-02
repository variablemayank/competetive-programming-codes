#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<vector<long long> > matrix;
	for(int i=0;i<3;i++)
	{
		vector<long long >temp;
		for(int j=0;j<3;j++)
		{
			int value;
			cin>>value;
			temp.push_back(value);
		}
		matrix.push_back(temp);
	}
	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix[i].size();j++)
		{
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
}
