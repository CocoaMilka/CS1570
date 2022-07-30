#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
int sumEqualK (vector<int> nums, int k) 
{
    int ans = 0;
    for(int i = 0; i < nums.size(); i++) 
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++) 
        {
            sum+=nums[j];
            if (sum == k) 
            {
                ans++;
            }
        }
    }
    return ans;
}

};

int main() {
    vector<int> nums = {1, 2, 3};
    int k = 3;

    Solution solu;

    cout << solu.sumEqualK(nums, k) << endl;

    return 0;
}
