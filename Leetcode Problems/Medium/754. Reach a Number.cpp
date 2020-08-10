#include <math.h>

using namespace std;

class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);

        int i = 1;
        int sum = 1;
        while (sum < target)
        {
            i++;
            sum += i;
        }

        while (sum % 2 != target % 2)
        {
            i++;
            sum += i;
        }

        return i;
    }
};