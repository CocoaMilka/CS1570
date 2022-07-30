#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution 
{
public:
    int max_size(vector<int> nums, int k) 
    {
        map <int,int> cumulative_sum;
        cumulative_sum[0] = -1;
        int sum = 0;
        int maxl = 0;

        for (int i = 0; i < nums.size(); i++) 
        {
            sum += nums[i];

            if (cumulative_sum.count(sum - k)) 
            {
                maxl = max(i - cumulative_sum[sum - k], maxl);
            }
            if (!cumulative_sum.count(sum-k)) 
            {
                cumulative_sum[sum] = i;
            }
        }

        return maxl;
    }
};

int main() {
    vector<int> nums = {1, -1, 5, -2, 3};
    int k = 3;

    Solution solu;

    cout << solu.max_size(nums, k);
    return 0;
}
