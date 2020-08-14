#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> stones{ a,b,c };
        sort(stones.begin(), stones.end());

        int minMoves = 0;
        const int maxMoves = stones[2] - stones[0] - 2;

        if ((stones[0] == stones[1] - 2) || (stones[2] == stones[1] + 2))
            return { 1,maxMoves };

        if (stones[0] < stones[1] - 1)
        {
            stones[0] = stones[1] - 1;
            minMoves++;
        }

        if (stones[2] > stones[1] + 1)
        {
            stones[2] = stones[1] + 1;
            minMoves++;
        }

        return { minMoves, maxMoves };
    }
};