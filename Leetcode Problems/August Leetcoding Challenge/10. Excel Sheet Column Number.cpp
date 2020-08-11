#include <string>

using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        long long multiplier = 1;
        long long n = 0;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            n += (s[i] - 64) * multiplier;
            multiplier *= 26;
        }

        return n;
    }
};