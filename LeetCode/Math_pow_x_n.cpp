class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1;
        
        bool neg = false;
        
        if (n < 0)
        {
            neg = true;
        }
        
        double ans = 1;
        while (n)
        {   
            if (n % 2)
            {
                ans = ans * x;
            }
            x = x*x;
            n = n/2;
        }
        
        if (neg)
        {
            ans = 1/ans;
        }
        return ans;
    }
};
