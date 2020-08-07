#include <string>
#include <array>

using namespace std;

class Solution {
public:
    string removeVowels(string str) {

        array<int, 6> vowels{ 'a','e','i','o','u','y' };

        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < vowels.size(); j++)
            {
                if (str[i] == vowels[j] || str[i] == (vowels[j] - 32))
                {
                    str.erase(i, 1);
                    i--;
                    break;
                }
            }
        }

        return str;
    }
};