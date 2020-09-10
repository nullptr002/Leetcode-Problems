#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string removeDuplicates(string S) {
        
        vector<char> str;

        for (int i = 0; i < S.size(); i++)
        {
            if (!str.empty() && S[i] == str.back())
                str.pop_back();
            else
                str.push_back(S[i]);
        }

        string res(str.begin(), str.end());

        return res;
    }
};