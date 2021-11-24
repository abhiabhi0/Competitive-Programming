class Solution {
public:
    int findComplement(int num) {
        int i = 0, res = 0;
        while (num)
        {
            if (num%2 == 0)
            {
                res += 1<<i;
            }
            num = num>>1;
            i++;
        }
        return res;
    }
};
