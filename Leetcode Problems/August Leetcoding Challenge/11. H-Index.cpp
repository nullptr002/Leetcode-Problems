#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {

        sort(citations.begin(), citations.end(), [](int a, int b) { return a > b; });

        // needed in case there is only 1 citation
        citations.emplace_back(-1);

        for (int i = 0; i < citations.size(); i++)
            if (i >= citations[i])
                return i;

        return 0;
    }
};