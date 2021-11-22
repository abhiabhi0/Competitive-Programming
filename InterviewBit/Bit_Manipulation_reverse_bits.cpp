unsigned int Solution::reverse(unsigned int A) {
    unsigned int res = 0;

    for (int i = 0; i < 32; ++i)
    {
        if ((1<<i) & A)
        {
            res += (1<<(31-i));
        }
    }

    return res;
}
