#include <bits/stdc++.h>
using namespace std;
void masking()
{
	int n;
	cin >> n;
	vector<int> masks(n, 0);
	for (int i = 0; i < n; i++)
	{
		int num_workers;
		cin >> num_workers;
		int mask = 0;
		for (int j = 0; j < num_workers; ++j)
		{
			int day;
			cin >> day;
			mask = (mask | (1 << day));
		}
		masks[i] = mask;
	}
	int max_days = 0;
	int person1 = -1;
	int person2 = -1;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; ++j)
		{
			int interSection = (masks[i] & masks[j]);
			int common_days = __builtin_popcount(interSection);
			if (common_days > max_days)
			{
				max_days = common_days;
				person1 = i;
				person2 = j;
			}
			max_days = max(max_days, common_days);
		}
	}
}
vector<vector<int>> subsets(vector<int> &nums)
{
	int n = nums.size();
	int subsets_ct = (1 << n);
	vector<vector<int>> outer;
	for (int mask = 0; mask < subsets_ct; mask++)
	{
		vector<int> inner;
		for (int i = 0; i < n; ++i)
		{
			if (mask & (1 << i) != 0)
			{
				inner.emplace_back(nums[i]);
			}
		}
		outer.emplace_back(inner);
	}
	return outer;
}

void bitMaskinSubset()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
}

int main()
{
	
}
