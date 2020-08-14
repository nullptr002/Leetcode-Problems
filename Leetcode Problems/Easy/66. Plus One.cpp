#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            cout << "AM FOST AICI" << endl;
            if (digits[i] == 9)
            {
                digits[i] = 0;

                if (i == 0)
                {
                    digits.emplace(digits.begin(), 1);
                    return digits;
                }
            }
            else
            {
                digits[i]++;
                return digits;
            }
        }

        return {};
    }
};
