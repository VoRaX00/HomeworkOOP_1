#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
// 1 <= nums.length <= 5 * 104
//-10^9 <= nums[i] <= 10^9

vector<int> majorityElement(vector<int> &nums)
{
	map<int, int> a;
	for (auto i : nums)
	{
		a[i]++;
	}
	vector<int> ans;
	for (auto i : a)
	{
		if (i.second > (nums.size() / 3))
		{
			ans.push_back(i.first);
		}
	}
	return ans;
}

int main()
{
	vector<int> arr{3, 2, 3, 1, 1, 1};
	majorityElement(arr);
}
