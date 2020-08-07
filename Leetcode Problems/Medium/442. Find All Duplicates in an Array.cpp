#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> fr(nums.size() + 1, 0);
        vector<int> solution;

        for (int i = 0; i < nums.size(); i++)
        {
            fr[nums[i]]++;
            if (fr[nums[i]] == 2)
            {
                solution.push_back(nums[i]);
            }
        }

        return solution;
    }
};