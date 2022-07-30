#include <iostream>
#include <vector>

using namespace std;

class Solution
{
private:
    int fee = 0;
public:
	void SetFee(int fee_) 
	{
	    fee = fee_;
	}

	int AmericaRuleWithFee(vector<int> prices)
	{
	    int min_price = prices[0];
	    int max_profit = 0;

	    for (int i = 1; i < prices.size(); i++) 
	    {
	        if (prices[i] < min_price) 
	        {
	            min_price = prices[i];
	        }
	        else if (min_price < prices[i] && prices[i] < min_price + fee) 
	        {
	        	//Do nothing
	        }
	        else if (prices[i] > min_price + fee) 
	        {
	            max_profit += prices[i] - min_price - fee;
	            min_price = prices[i] - fee;
	        }

	    }
	    return max_profit;
	}
};

int main() 
{
	Solution solu;

    vector<int> prices = {7,1,5,3,6,4};
    int fee = 2;
    
    solu.SetFee(fee);

    cout << solu.AmericaRuleWithFee(prices) << endl;
}
