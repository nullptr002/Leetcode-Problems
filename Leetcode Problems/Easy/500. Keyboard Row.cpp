#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> rows = {
            "qwertyuiop",
            "asdfghjkl",
            "zxcvbnm"
        };

        unordered_map<char, int> mapp;

        for (int i = 0; i < rows.size(); i++)
            for (const auto& letter : rows[i])
                mapp[letter] = i;

        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 1; j < words[i].size(); j++)
            {
                int a = mapp[tolower(words[i][j])];
                int b = mapp[tolower(words[i][j - 1])];

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