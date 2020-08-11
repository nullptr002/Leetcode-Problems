#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
        {
            while (!isalnum(s[i]) && i < s.size() - 1)
                i++;

            while (!isalnum(s[j]) && j > 0)
                j--;

            if (isalnum(s[i]) && isalnum(s[j]) && (tolower(s[i]) != tolower(s[j])))
                return false;
        }

        return true;
    }
};