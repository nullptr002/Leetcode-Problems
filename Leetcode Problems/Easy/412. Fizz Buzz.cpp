#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    // With division
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

    // Without division
    vector<string> fizzBuzz2(int n) {
        vector<string> sol(n);

        int i = 0;
        int fizz = 3, buzz = 5;
        while (i < n)
        {
            if (i + 1 == fizz && i + 1 == buzz)
            {
                sol[i] = "FizzBuzz";
                fizz += 3;
                buzz += 5;
            }
            else if (i + 1 == fizz)
            {
                sol[i] = "Fizz";
                fizz += 3;
            }
            else if (i + 1 == buzz)
            {
                sol[i] = "Buzz";
                buzz += 5;
            }
            else
            {
                sol[i] = to_string(i + 1);
            }

            i++;
        }

        return sol;
    }
};