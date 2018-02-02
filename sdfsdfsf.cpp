#include <bits/stdc++.h>

using namespace std;

typedef long long int int64;
const int N = (int)4e5 + 1000;
const int LOGN = 20;
int n, m, q;
vector<int> graph[N];
vector<pair<int, int> > black_edges;
int white_comp_cnt;
int v_to_white_comp[N];
int timer;
int t_in[N], t_out[N];
int f_up[N];
bool is_articulation_point[N];
int block_cnt;
int block_id[N];
vector<int> cur_block;
vector<int> block_graph[N];
int par[N][LOGN];
bool used[N];
int black_color[N];
vector<vector<int> > blocks;
void dfs_comp(int v)
{
	v_to_white_comp[v] = white_comp_cnt;
	for (int to : graph[v])
		if (v_to_white_comp[to] == -1)
			dfs_comp(to);
}
void proccess_block(int limit_size)
{
	vector<int> cur_comp;
	while ((int)cur_block.size() > limit_size)
	{
		cur_comp.push_back(cur_block.back());
		cur_block.pop_back();
	}
	blocks.push_back(cur_comp);
}
void init_dfs(int v, int p, int cur_black_color)
{
	//dbg(v, p);
	black_color[v] = cur_black_color;
	cur_block.push_back(v);
	t_in[v] = f_up[v] = timer++;
	used[v] = true;
	int to_cnt = 0;
	for (int to : graph[v])
	{
		if (to == p)
			continue;
		if (used[to])
		{
			f_up[v] = min(f_up[v], t_in[to]);
		}
		else
		{
			int limit_size = (int)cur_block.size();
			to_cnt++;
			init_dfs(to, v, cur_black_color);
			if (f_up[to] >= t_in[v])
			{
				if (p != -1 || (p == -1 && to_cnt > 1))
				{
					proccess_block(limit_size);
					blocks.back().push_back(v);
				}
				if (p != -1)
					is_articulation_point[v] = true;
			}
			f_up[v] = min(f_up[v], f_up[to]);
		}
	}
	if (p == -1)
		is_articulation_point[v] = (to_cnt > 1);
}
bool is_par(int p, int v)
{
	return t_in[p] <= t_in[v] && t_out[v] <= t_out[p];
}
int get_lca(int a, int b)
{
	if (is_par(a, b))
		return a;
	if (is_par(b, a))
		return b;
	for (int i = LOGN - 1; i >= 0; i--)
	{
		int new_a = par[a][i];
		if (new_a == -1 || is_par(new_a, b))
			continue;
		a = new_a;
	}
	return par[a][0];
}
void block_dfs(int v, int p)
{
	t_in[v] = timer++;
	used[v] = true;
	par[v][0] = p;
	for (int i = 1; i < LOGN; i++)
	{
		if (par[v][i - 1] == -1)
			break;
		par[v][i] = par[par[v][i - 1]][i - 1];
	}
	for (int to : block_graph[v])
	{
		if (used[to])
			continue;
		block_dfs(to, v);
	}
	t_out[v] = timer++;
}
void init_graph()
{
	fill(v_to_white_comp, v_to_white_comp + n, -1);
	for (int i = 0; i < n; i++)
	{
		if (v_to_white_comp[i] != -1)
			continue;
		dfs_comp(i);
		white_comp_cnt++;
	}

	for (int i = 0; i < n; i++)
		graph[i].clear();
	for (auto p : black_edges)
	{
		int a = p.first;
		int b = p.second;
		a = v_to_white_comp[a];
		b = v_to_white_comp[b];
		if (a != b)
		{
		
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
	}
	fill(used, used + white_comp_cnt, false);
	int black_cnt = 0;
	fill(block_id, block_id + n, -1);
	for (int i = 0; i < white_comp_cnt; i++)
	{
		if (used[i])
			continue;
		init_dfs(i, -1, black_cnt);
		black_cnt++;
	}

	block_cnt = (int)blocks.size() + white_comp_cnt;

	for (int i = 0; i < (int)blocks.size(); i++)
	{
		for (int v : blocks[i])
		{
			block_id[v] = i;
			if (is_articulation_point[v])
			{
				int a = i;
				int b = v + (int)blocks.size();
	
				block_graph[a].push_back(b);
				block_graph[b].push_back(a);
			}
		}
	}
	fill(used, used + block_cnt, false);
	for (int i = 0; i < block_cnt; i++)
		for (int j = 0; j < LOGN; j++)
			par[i][j] = -1;
	for (int i = 0; i < block_cnt; i++)
	{
		if (used[i])
			continue;
		block_dfs(i, -1);
	}
}
bool on_path(int v, int a, int b)
{
	return is_par(b, v) && is_par(v, a);
}
bool check(int a, int b, int c)
{

	//a != b holds
	if (c == a || c == b)
		return false;
	if (!is_articulation_point[c])
		return true;
	if (is_articulation_point[a])
		a = (int)blocks.size() + a;
	else
		a = block_id[a];
	if (is_articulation_point[b])
		b = (int)blocks.size() + b;
	else
		b = block_id[b];
	c = (int)blocks.size() + c;
	int lca = get_lca(a, b);

	if (on_path(c, a, lca) || on_path(c, b, lca))
		return false;
	return true;
}
bool solve(int a, int b, int c, int d)
{
	a = v_to_white_comp[a];
	b = v_to_white_comp[b];
	c = v_to_white_comp[c];
	d = v_to_white_comp[d];

	if (black_color[a] != black_color[b])
		return false;
	if (black_color[c] != black_color[d])
		return true;
	if (c == d)
		return false;
	if (a == b)
		return true;
	if (check(a, b, c))
		return true;
	if (check(a, b, d))
		return true;
	return false;
}
int main()
{

	scanf("%d%d%d", &n, &m, &q);
	for (int i = 0; i < m; i++)
	{
		int a, b, t;
		scanf("%d%d%d", &a, &b, &t);
		a--;
		b--;

		if (t == 0)
			black_edges.emplace_back(a, b);
		else
		{
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
	}
	init_graph();
	for (int i = 0; i < q; i++)
	{
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		a--;
		b--;
		c--;
		d--;

		bool res = solve(a, b, c, d);
		printf("%s\n", res ? "Yes" : "No");
	}
	return 0;
}
