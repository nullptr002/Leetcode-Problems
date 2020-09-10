#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string res(max(num1.size(), num2.size()), '?');

        int remainder = 0;
        int calc = 0;

        for(int i = 0; true; i++)
        {
            if (i < num1.size() && i < num2.size())
                calc = (num1[num1.size() - i - 1] - '0') + (num2[num2.size() - i - 1] - '0');
            else if (i >= num1.size() && i < num2.size())
                calc = num2[num2.size() - i - 1] - '0';
            else if (i >= num2.size() && i < num1.size())
                calc = num1[num1.size() - i - 1] - '0';
            else if (remainder == 1)
            {
                res.insert(0, 1, '1');
                break;
            }
            else
                break;

            calc += remainder;

            res[res.size() - i - 1] = (calc % 10) + '0';

            if (calc >= 10)
                remainder = 1;
            else
                remainder = 0;

        }

        return res;
    }
};