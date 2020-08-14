#include <vector>

using namespace std;

enum Direction
{
    right,
    down,
    left,
    up
};

//Direction operator++(Direction& dir, int)
//{
//    dir = static_cast<Direction>((static_cast<int>(dir) + 1) % 4);
//
//    return dir;
//}

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        Direction dir = Direction::right;

        if (matrix.size() == 0 || matrix[0].size() == 0)
            return {};

        vector<int> sol;

        if (matrix[0].size() == 1)
        {
            sol.resize(matrix.size());

            for (int i = 0; i < matrix.size(); i++)
                sol[i] = matrix[i][0];

            return sol;
        }

        int xMinLimit = 0;
        int xMaxLimit = matrix[0].size() - 1;
        int yMinLimit = 0;
        int yMaxLimit = matrix.size() - 1;

        sol.resize(matrix.size() * matrix[0].size());
        int solIndex = 0;

        for (int x = 0, y = 0; true;)
        {
            if (solIndex == sol.size())
                break;

            sol[solIndex] = matrix[y][x];
            solIndex++;

            if (dir == Direction::right)
            {
                if (x < xMaxLimit)
                    x++;

                if (x == xMaxLimit)
                {
                    yMinLimit++;
                    dir = Direction::down;
                }
            }
            else if (dir == Direction::down)
            {
                if (y < yMaxLimit)
                    y++;

                if (y == yMaxLimit)
                {
                    xMaxLimit--;
                    dir = Direction::left;
                }
            }
            else if (dir == Direction::left)
            {
                if (x > xMinLimit)
                    x--;

                if (x == xMinLimit)
                {
                    yMaxLimit--;
                    dir = Direction::up;
                }
            }
            else if (dir == Direction::up)
            {
                if (y > yMinLimit)
                    y--;

                if (y == yMinLimit)
                {
                    xMinLimit++;
                    dir = Direction::right;
                }
            }
        }

        return sol;
    }
};