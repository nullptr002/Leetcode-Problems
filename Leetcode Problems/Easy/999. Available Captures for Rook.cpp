#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {

        struct {
            int vectorul, caracterul;
        } rookPos;

        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                if (board[i][j] == 'R')
                    rookPos = { i,j };

        int captured = 0;

        // verifica in sus
        for (int k = rookPos.vectorul; k >= 0; k--)
        {
            if (board[k][rookPos.caracterul] == 'B')
                break;
            else if (board[k][rookPos.caracterul] == 'p')
            {
                captured++;
                break;
            }
        }

        // verifica in jos
        for (int k = rookPos.vectorul; k < 8; k++)
        {
            if (board[k][rookPos.caracterul] == 'B')
                break;
            else if (board[k][rookPos.caracterul] == 'p')
            {
                captured++;
                break;
            }
        }

        // verifica in stanga
        for (int k = rookPos.caracterul; k >= 0; k--)
        {
            if (board[rookPos.vectorul][k] == 'B')
                break;
            else if (board[rookPos.vectorul][k] == 'p')
            {
                captured++;
                break;
            }
        }

        // verifica in dreapta
        for (int k = rookPos.caracterul; k < 8; k++)
        {
            if (board[rookPos.vectorul][k] == 'B')
                break;
            else if (board[rookPos.vectorul][k] == 'p')
            {
                captured++;
                break;
            }
        }

        return captured;
    }
};