#include <string>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercases = 0;

        for (char letter : word)
            if (isupper(letter))
                uppercases++;

        if (uppercases == 0)
            return true;
        else if (uppercases == word.size())
            return true;
        else if (uppercases == 1 && isupper(word[0]))
            return true;

        return false;
    }
};