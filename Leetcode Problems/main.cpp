#include "Medium/442. Find All Duplicates in an Array.cpp"
#include <iostream>

int main()
{
    Solution s;
    vector<int> lol{ 4,3,2,7,8,2,3,1 };

    auto x = s.findDuplicates(lol);
    
    for(int i = 0; i < x.size(); i++)
        cout << x[i] << endl;

    return 0;
}