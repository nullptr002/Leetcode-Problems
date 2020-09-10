#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> sol(n);

        for (int i = 1; i <= n; i++)
        {
            if (i % 15 == 0)
                sol[i - 1] = "FizzBuzz";
            else if (i % 3 == 0)
                sol[i - 1] = "Fizz";
            else if (i % 5 == 0)
                sol[i - 1] = "Buzz";
            else
                sol[i - 1] = to_string(i);
        }

        return sol;
    }
};