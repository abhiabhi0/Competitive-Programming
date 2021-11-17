class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        if (n > 0)
        {
            if (count > 1)
            {
                return false;
            }
            else
            {
                while (n)
                {
                    n = n&(n-1);
                    count++;
                }
            }
        }
        
        if (count == 1)
        {
            return true;
        }
        return false;
    }
};
