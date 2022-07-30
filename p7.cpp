#include <iostream>
#include <vector>

using namespace std;

class ConOnes 
{
public:

	int maxNumOfConsecutiveOnes (vector<int> nums)
	{
		vector<int> numOfOnes;
		int count = 0;
		int max = 0;

		for (auto it : nums)
		{
			if (it == 1)
			{
				count++;
			}
			else
			{
				numOfOnes.push_back(count);
				count = 0;
			}
		}

		numOfOnes.push_back(count);

		for (auto it : numOfOnes)
		{
			if (it > max)
			{
				max = it;
			}
		}

		return max;
	}

};

int main ()
{
	ConOnes solu;

	vector<int> nums = {1, 1, 0, 1, 1, 1};

	cout << solu.maxNumOfConsecutiveOnes(nums);

	return 0;
}