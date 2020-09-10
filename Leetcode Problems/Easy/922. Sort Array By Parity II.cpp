#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> solution(A.size());
        int oddPos = 1;
        int evenPos = 0;

        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] % 2 == 0)
            {
                solution[evenPos] = A[i];
                evenPos += 2;
            }
            else
            {
                solution[oddPos] = A[i];
                oddPos += 2;
            }
        }

        return solution;
    }
};