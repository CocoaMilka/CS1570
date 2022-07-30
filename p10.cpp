#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution
{
public:
	string intToRome (int num)
	{
		vector<string> numerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
		vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
		string ans;
		int biggest;

		for (int i = 0; i < values.size(); i++)
		{
			if (num - values[i] >= 0)
			{
				num -= values[i];
				ans += numerals[i];

				if (num > 0 && i > 11)
				{
					i--;
				}
			} 
		}

		return ans;
	}
};

int main ()
{
	Solution solu;
	int num = 1994;

	cout << solu.intToRome(num);

	return 0;
}
