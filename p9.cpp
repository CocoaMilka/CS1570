#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution
{
public:
	int romeToInt (string rom)
	{
		map<char, int> numerals = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
		int ans = 0;
		int previous = 0;

		for (int i = rom.size() - 1; i >= 0; i--)
		{
			if (numerals.at(rom[i]) >= previous)
			{
				ans += numerals.at(rom[i]);
				previous = numerals.at(rom[i]);
			}
			else
			{
				ans -= numerals.at(rom[i]);
				previous = numerals.at(rom[i]);
			}
		}

		return ans;
	}
};

int main ()
{
	Solution solu;
	string s = "MCMXCIV";

	cout << solu.romeToInt(s);

	return 0;
}
