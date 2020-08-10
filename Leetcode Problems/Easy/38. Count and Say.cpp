#include <string>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string x = "1";
        string y;

        for (int i = 1; i < n; i++)
        {
            char current = 'x';
            int count = 1;
            while (true)
            {
                if (current == x[0])
                    count++;
                else if (current != 'x')
                {
                    y.push_back(to_string(count)[0]);
                    y.push_back(current);
                    count = 1;
                }

                if (x.empty())
                    break;

                current = x[0];
                x.erase(0, 1);
            }

            x = y;
            y = "";
        }

        return x;
    }
};