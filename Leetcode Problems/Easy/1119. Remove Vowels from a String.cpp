#include <iostream>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

class Solution {
public:
    string removeVowels(string str) {

        const char vowels[] { 'a','e','i','o','u','y' };

        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < (sizeof(vowels) / sizeof(char)); j++)
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

    string removeVowelsModern(string str) {

        array<char,6> vowels { 'a','e','i','o','u','y' };

        int i = 0;
        for_each(str.begin(), str.end(), [&](const char &c) {
            if (any_of(vowels.begin(), vowels.end(), [&](const char& d) { return c == d || c == d - 32; }))
                str.erase(i,1);

            i++;
        });

        return str;
    }
};