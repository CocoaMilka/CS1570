#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int subarray_divisible_equal_k(vector<int> nums, int k) {
        map <int,int> cumulative_sum;
        cumulative_sum[0] = 1;
        int sum = 0;
        int ans =0;
        int remainder = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            remainder = sum % k;

            if (remainder < 0) 
            {
                remainder += k;
            }
            if (cumulative_sum.count(remainder)) 
            {
                ans += cumulative_sum[remainder];
            }
            cumulative_sum[remainder]++;
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {4, 5, 0, -2, -3, 1};
    int k = 5;

    Solution solu;

    cout << solu.subarray_divisible_equal_k(nums, k) << endl;
    
    return 0;
}
