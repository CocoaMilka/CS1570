#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:

	int maxProfit (vector<int> prices)
	{
	    int maxprofit = 0;

	    int buy = 100; //Max buying power
	    int sell = 0;

	    int index;

	    //Loop through vector - Find smallest value

	    for (int i = 0; i < prices.size(); i++)
	    {
	        if (prices.at(i) < buy)
	        {
	            buy = prices.at(i);
	            index = i;
	        }
	    }

	    //cout << "Buy for: " << buy << endl;

	    //Find largest value from range Vector[Smallest] to end

	        for (int i = index; i < prices.size(); i++)
	    {
	        if (prices.at(i) > sell)
	        {
	            sell = prices.at(i);
	        }
	    }

	    //cout << "Sell for: " << sell << endl;

	    //Profit Vector[Largest] - Vector[Smallest]

	    if (sell - buy > 0)
	    {
	        maxprofit = sell - buy;
	    } 
	    else
	    {
	        maxprofit = 0;
	    }

	    return maxprofit;
	}

};

int main ()
{
	Solution solu;
	vector<int> prices = {7, 1, 5, 3, 6, 4};

	cout << solu.maxProfit(prices);

	return 0;
}