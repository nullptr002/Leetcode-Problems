#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> rows = {
            "qwertyuiop",
            "asdfghjkl",
            "zxcvbnm"
        };

        map<char, int> mapp;

        // assigning each letter in the map the corresponding row value
        for (int i = 0; i < rows.size(); i++)
            for (const auto& letter : rows[i])
                mapp[letter] = i;

        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 1; j < words[i].size(); j++)
            {
                // saves in a and b the map value of 2 successive letters
                // looks ugly because ternary operator was used to transform uppercase letters in lowercase
                int a = mapp[words[i][j] < 97 ? words[i][j] + 32 : words[i][j]];
                int b = mapp[words[i][j - 1] < 97 ? words[i][j - 1] + 32 : words[i][j - 1]];

                if (a != b)
                {
                    words.erase(words.begin() + i);
                    i--;
                    break;
                }
            }
        }

        return words;
    }
};