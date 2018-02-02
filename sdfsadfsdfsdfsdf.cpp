#include <bits/stdc++.h>

using namespace std;

int minimumDeletions(vector < int > a){
    int count =0;
    for(int i=0;i<a.size()&& i+1<a.size()&& i+2<a.size();i++)
    {
    	if((a[i]<a[i+1]) && (a[i+1]<a[i+2]))
    	{
    		count++;
		}
		else if((a[i]>a[i+1] )&& (a[i+1]>a[i+2]))
		{
			count++;
		}
	}
	return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
       
    }
    // Return the minimum number of elements to delete to make the array zigzag
    int result = minimumDeletions(a);
    cout << result << endl;
    return 0;
}

