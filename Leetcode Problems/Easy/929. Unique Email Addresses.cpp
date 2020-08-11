#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        map<string, int> mapp;

        for (string &email : emails)
        {
            bool beforeAt = true;
            bool plusFound = false;

            for (int i = 0; i < email.size(); i++)
            {
                if (beforeAt)
                {
                    if (email[i] != '@' && plusFound)
                    {
                        email.erase(i, 1);
                        i--;
                    }
                    else if (email[i] == '@')
                    {
                        mapp[email]++;
                        break;
                    }

                    if (email[i] == '.')
                    {
                        email.erase(i, 1);
                        i--;
                    }
                    else if (email[i] == '+')
                    {
                        plusFound = true;
                        email.erase(i, 1);
                        i--;
                    }
                }
            }
        }

        return mapp.size();
    }
};