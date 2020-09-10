#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> freq;
        for (int i = 0; i < arr.size(); i++)
            freq[arr[i]]++;

        for (auto it = freq.end(); it != freq.begin();)
        {
            it--;

            if (it->first == it->second)
                return it->first;
        }

        return -1;
    }
};