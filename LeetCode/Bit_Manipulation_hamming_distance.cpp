class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = x^y;
        int count = 0;
        
        while(res)
        {
            res = res & (res-1);
            count++;
        }
        return count;
    }
};
