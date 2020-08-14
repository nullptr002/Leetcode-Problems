#include <vector>

using namespace std;

class Solution {
public:
    int countLargestGroup(int n) {
        std::vector<int> groups(37, 0);

        int largest = 0;
        for (int i = 1; i <= n; i++)
        {
            if (largest < ++groups[digitsSum(i)])
            {
                largest = groups[digitsSum(i)];
            }
        }

        int count = 0;
        for (auto& x : groups)
            if (x == largest)
                count++;

        return count;
    }

    int digitsSum(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
};