#include <math.h>
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:

    int getMax(int a, int b, int c)
    {
        int max = 0;
        if (a > b && a > c)
            max = a;
        if (b > a && b > c)
            max = b;
        if (c > a && c > b)
            max = c;
        return max;
    }

    int getMin(int a, int b, int c)
    {
        int min = 0;
        if (a < b && a < c)
            min = a;
        if (b < a && b < c)
            min = b;
        if (c < a && c < b)
            min = c;
        return min;
    }

    vector<int> numMovesStones(int a, int b, int c) {

        int max = this->getMax(a, b, c);
        int min = this->getMin(a, b, c);

        int minVec = 0;
        int count = 0;

        int* fr = new int[max + 1]();

        fr[a]++;
        fr[b]++;
        fr[c]++;

        for (size_t i = min; i < max; i++)
        {
            if (fr[i] == 0)
            {
                count++;
            }
        }

        int cautat = 0;

        if (a != min)
        {
            if (a != max)
            {
                cautat = a;
                if (max - cautat > 2 && cautat - min > 2)
                    minVec = 2;
            }
        }
        if (b != min)
        {
            if (b != max)
            {
                cautat = b;
                if (max - cautat > 2 && cautat - min > 2)
                    minVec = 2;
            }
        }
        if (c != min)
        {
            if (c != max)
            {
                cautat = c;
                if (max - cautat > 2 && cautat - min > 2)
                    minVec = 2;
            }
        }

        if (minVec != 2)
        {
            if (count >= 1)
                minVec = 1;
            else
                minVec = 0;
        }

        delete[]fr;
        return { minVec, count };

    }
};

int main()
{
    Solution s1;
    vector <int> myVec = s1.numMovesStones(3, 5, 1);
    for (auto& x : myVec)
        std::cout << x << " ";

}