#include<bits/stdc++.h>a
using namespace std;

int pw;
vector<int> c;
bool cmp(int i, int j)
{
  if (c[i] != c[j])
    return c[i] < c[j];
  int ci = i + pw < c.size() ? c[i + pw] : -1;
  int cj = j + pw < c.size() ? c[j + pw] : -1;
  return ci < cj;
}
 
int comp(int st, string & t, string & s)
{
  for (int i = 0; i < t.length(); ++i)
  {
    if (st + i == s.length())
      return -1;
    if (s[st + i] < t[i])
      return -1;
    if (s[st + i] > t[i])
      return 1;
  }
  return 0;
}
 
int main()
{
  string s, t;
  cin >> s >> t;
  int n = s.length();
  c.resize(n);
  vector<int> p(n);
  for (int i = 0; i < n; ++i)
  {
    c[i] = s[i] - 'a';
    p[i] = i;
  }
  for (int i = 1; (1 << (i - 1)) < n; ++i)
  {
    pw = 1 << (i - 1);
    vector<int> nc(n);
    sort(p.begin(), p.end(), cmp);
    nc[p[0]] = 0;
    int cur = 0;
    for (int j = 1; j < n; ++j)
    {
      if (cmp(p[j - 1], p[j]))
        ++cur;
      nc[p[j]] = cur;
    }
    c = nc;
  }
  int l = 0, r = n - 1, ans_l = n;
  while (l <= r)
  {
    int m = (l + r)/2;
    if (comp(p[m], t, s) == -1)
    {
      l = m + 1;
    }
    else
    {
      ans_l = m;
      r = m - 1;
    }
  }
 
  l = ans_l;
  r = n - 1;
  int ans_r = -1;
  while (l <= r)
  {
    int m = (l + r)/2;
    if (comp(p[m], t, s) == 1)
    {
      r = m - 1;
    }
    else
    {
      ans_r = m;
      l = m + 1;
    }
  }
  vector<int> ans;
  for (int i = ans_l; i <= ans_r; ++i)
  {
    ans.push_back(p[i]);
  }
  sort(ans.begin(), ans.end());
  for (int i = 0; i < ans.size(); ++i)
  {
    cout << ans[i] << ' '; 
  }
  return 0;
}
