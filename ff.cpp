#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
	int n;
	std::cin >> n;
	std::vector<std::pair<int,int>> first(n);
	for (int i = 0; i < n; ++i)
	{
		std::pair<int,int> p;
		std::cin >> p.first >> p.second;
		first.push_back(p);
	}
	int m;
	std::cin >> m;
	std::vector<std::pair<int,int>> second(m);
	for (int i = 0; i < m; ++i)
	{
		std::pair<int,int> p;
		std::cin >> p.first >> p.second;
		second.push_back(p);
	}
 
	int diff = 0;
 
	auto comp1 = [](std::pair<int,int>& l, std::pair<int,int>& r)
	{
		if (l.first != r.first)
			return l.first < r.first;
		return l.second < r.second;
	};
	auto comp2 = [](std::pair<int,int>& l, std::pair<int,int>& r)
	{
		if (l.second != r.second)
			return l.second > r.second;
		return l.first > r.first;
	};
	std::sort(first.begin(), first.end(), comp2);
	std::sort(second.begin(), second.end(), comp1);
	int diff1 = second.back().first - first.back().second;
	if (diff1 > 0)
		diff = diff1;
 
	std::sort(first.begin(), first.end(), comp1);
	std::sort(second.begin(), second.end(), comp2);
	int diff2 = first.back().first - first.back().second;
	if (diff2 > 0 && diff2 > diff)
		diff = diff2;
	std::cout << diff << std::endl;
	return 0;
}
