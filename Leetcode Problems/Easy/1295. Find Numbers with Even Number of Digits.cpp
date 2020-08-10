#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for_each(nums.begin(), nums.end(), [&](int n) { 
            if (nOfDigits(n) % 2 == 0)
                count++;
        });

        return count;
    }

    // binary searching the number of digits lmao
    int nOfDigits(int a)
    {
        if (a < 1000)
        {
            if (a >= 100)
                return 3;
            else
            {
                if (a >= 10)
                    return 2;

                return 1;
            }
        }
        else
        {
            if (a < 10000)
            {
                return 4;
            }
            else
            {
                if (a >= 100000)
                    return 6;

                return 5;
            }
        }
    }
};

