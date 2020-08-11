
class Solution {
public:
    bool isPowerOfFour(int num) {
        
        int i = 1;
        while(true)
        {
            if (i == num)
                return true;

            if (i == 1073741824)
                return false;

            i <<= 2;    
        }

        return false;
    }
};