#include <iostream>

using namespace std;

class Solution
{
public:
	string removeAdjacentDuplicates(string s)
	{
		int i = 0;
		while (i < s.size())
		{
			if (s[i] == s[i + 1])
			{
				//cout << "i: " << s[i] << " i + 1: " << s[i + 1] << " string: " << s << endl;
				s.erase(i, 2);

				i = 0;
			}
			else
			{
				i++;
			}
		}

		return s;
	}
};

int main ()
{
	Solution solu;
	string s = "abbaca";

	cout << solu.removeAdjacentDuplicates(s);

	return 0;
}