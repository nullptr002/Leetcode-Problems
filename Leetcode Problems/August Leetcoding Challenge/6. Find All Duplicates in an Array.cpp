#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> fr(nums.size() + 1, 0);
        vector <int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            fr[nums[i]]++;
            if (fr[nums[i]] == 2)
            {
                result.push_back(nums[i]);
            }
        }

        return result;
    }
};