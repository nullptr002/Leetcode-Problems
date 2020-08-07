#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int, int> freq;

        for (const auto& x : arr)
            freq[x]++;

        vector<pair<int, int>> vec(freq.begin(), freq.end());
        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return b.second > a.second;
        });

        int i = 0;

        while (k > 0)
        {
            if (vec[i].second > 0)
                vec[i].second--;

            if (vec[i].second == 0)
            {
                i++;
            }

            k--;
        }

        return vec.size() - i;
    }
};