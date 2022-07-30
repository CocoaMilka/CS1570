#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int two_sum_equals_k(vector<int> nums, int k) 
    {
        map <int,int> mp_indice;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (mp_indice.count(k - nums[i])) 
            {
                return true;
            }
            mp_indice[nums[i]] = i;
        }
        return false;
    }
};

int main() {
    vector<int> nums = {3,2,4};
    int k = 6;
    Solution solu;

    cout << solu.two_sum_equals_k(nums,k) << endl;

    return 0;
}
