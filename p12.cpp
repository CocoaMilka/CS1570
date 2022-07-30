#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:

	int AmericaRule(vector<int> prices)
	{
	    int max_profit = 0;
	    for (int i = 0; i < prices.size() - 1; i++) 
	    {
	        if (prices[i + 1] > prices[i]) 
	        {
	            max_profit += (prices[i + 1] - prices[i]);
	        }
	    }

	    return max_profit;
	}
};

int main() 
{
	Solution solu;

    vector<int> prices = {7,1,5,3,6,4};

    cout << solu.AmericaRule(prices) << endl;
}
