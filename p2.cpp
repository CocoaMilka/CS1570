#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
	void printVector (vector<int> nums)
	{
		for (auto it : nums)
		{
			cout << it << " ";
		}
	}

	vector<int> removeDuplicates(vector<int> nums)
	{
		map<int, int> count;
		vector<int> ans;

		for (int i = 0; i < nums.size(); i++)
		{
			count.emplace(nums[i], 1);
		}

		for (auto it : count)
		{
			ans.push_back(it.first);
		}

		return ans;
	}
};

int main ()
{
	Solution solu;
	vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

	solu.printVector(solu.removeDuplicates(nums));

	return 0;
}