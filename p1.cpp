#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	bool isPalindrome (int num)
	{
		vector<int> nums;

		//Break num into individual numbers and push into vector
		while (num)
		{
			nums.push_back(num % 10);

			num = num / 10;
		}

		int i = 0;
		int j = nums.size() - 1;

		while (i < j)
		{
			if (nums[i] != nums[j])
			{
				return false;
			}

			i++;
			j--;
		}

		return true;
	}
};



int main ()
{
	Solution solu;
	int num = 1334331;

	cout << solu.isPalindrome(num);

	return 0;
}