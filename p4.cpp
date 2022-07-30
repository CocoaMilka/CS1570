#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
	bool isSubsequence (string s, string word)
	{
		int j = 0;

		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] == s[j])
			{
				j++;
			}
		}

		if (j == s.size())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main ()
{
	Solution solu;
	string s = "abc";
	string word = "ahbgdc";

	cout << solu.isSubsequence(s, word);

	return 0;
}