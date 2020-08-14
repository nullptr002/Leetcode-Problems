#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(), s.end()); <-- obv solution
        for (int i = 0; i < s.size() / 2; i++)
        {
            std::swap(s[i], s[s.size() - i - 1]);
        }
    }
};