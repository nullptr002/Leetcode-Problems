#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {

        // odd = impar, even = par
        int wannaBeEven = -1;
        int wannaBeOdd = -1;

        // 3,1,3,2,2,1,1,1,2,0,0,4,0,1,0,1,1,1,2,2
        // 0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1

        for (int i = 0; i < A.size(); i++)
        {
            if (i % 2 == 0 && A[i] % 2 == 1)
            {
                wannaBeOdd = i;
            }
            else if (i % 2 == 1 && A[i] % 2 == 0)
            {
                wannaBeEven = i;
            }

            if (wannaBeEven != -1 && wannaBeOdd != -1)
            {
                i = min(wannaBeEven, wannaBeOdd);

                swap(A[wannaBeEven], A[wannaBeOdd]);

                wannaBeEven = -1;
                wannaBeOdd = -1;
            }
            else if ((wannaBeEven != -1 || wannaBeOdd != -1) && i == (A.size() - 1))
            {
                i = 0;
            }
        }

        return A;
    }

    //vector<int> sortArrayByParityII2(vector<int>& A) {

    //    stack<int> wannaBeEven;
    //    stack<int> wannaBeOdd;

    //    for (int i = 0; i < A.size(); i++)
    //    {
    //        if (i % 2 == 0 && A[i] % 2 == 1)
    //        {
    //            wannaBeOdd.push(i);
    //        }
    //        else if (i % 2 == 1 && A[i] % 2 == 0)
    //        {
    //            wannaBeEven.push(i);
    //        }

    //        if (!wannaBeEven.empty() && !wannaBeOdd.empty())
    //        {
    //            swap(A[wannaBeEven.top()], A[wannaBeOdd.top()]);

    //            wannaBeEven.pop();
    //            wannaBeOdd.pop();
    //        }
    //    }

    //    return A;
    //}
};