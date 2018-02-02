#include <bits/stdc++.h>
using namespace std;
const int MAX = 100 + 7;
string a[MAX];
int  l, m;
int x[] = { 1, 0, -1, 0 };
int y[] = { 0, 1, 0, -1 };
bool visited[MAX][MAX];
vector < pair < int, int > > v;

/*
void bfs(int i, int j)
{
 
	queue < pair < int, int > > q;
	//visited[i][j] = 1;
	v.push_back(make_pair(i, j));
	a[i][j] = '.';
	q.push(make_pair(i, j));
	while (!q.empty())
	{
		pair < int, int > pii = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int newx = pii.first + x[i];
			int newy = pii.second + y[i];
 
			if (newx < 0 || newx >= l || newy < 0 || newy >= m)
				continue;
			if (a[newx][newy] == '.')
				continue;
			//	visited[newx][newy]= 1;
				cout << newx <<" "<<newy << endl;
			a[newx][newy] = '.';
			v.push_back(make_pair(newx, newy));
			q.push(make_pair(newx, newy));
 
		}
 
 
	}
 
 
 
}
 
 
void solve()
{
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < m; j++)
		{
			visited[i][j] = 0;
		}
	}
 
 
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == 'x' && !visited[i][j])
			{
				v.clear();
				bfs(i, j);
				int shift = l;
 
				for (int x = 0; x < v.size(); x++)
				{
					int fi = v[x].first;
					int se = v[x].second;
					int k = 0;
					for (k = fi + 1; k < l && a[k][se] == '.'; k++);
					shift = min(shift, k - fi - 1);
					// cout << k << " " << fi << " " << se  << endl;
				}
				// cout << shift << endl;
				for (int x = 0; x < v.size(); x++)
				{
 
					int fi = v[x].first;
					int se = v[x].second;
 
					a[fi + shift][se] = 'x';
					visited[fi + shift][se] = 1;
				}
 
 
 
			}
		}
	}
 
 
 
}

*/
int main()
{
	int  n;
	cin >> l >> m;
	for (int i = 0; i < l; i++)
		cin >> a[i];
	cin >> n;
	"{
/*	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
 
		int r = l - temp;
		if (i % 2 == 0)
		{
			int j;
			for (j = 0; j < m && a[r][j] == '.'; j++);
 
			if (j < m)
				a[r][j] = '.';
 
 
		}
		else
		{
 
			int j;
			for (j = m - 1; j >= 0 && a[r][j] == '.'; j--);
 
			if (j >= 0)
				a[r][j] = '.';
		}
 
 
 */
	//	solve();
 
	}
 /*
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j];
 
		}
		cout << endl;
	}
	*/
 
	//return 0;
