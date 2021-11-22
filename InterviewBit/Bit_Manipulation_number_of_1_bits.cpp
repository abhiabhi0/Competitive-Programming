int Solution::numSetBits(unsigned int A) {
    int count = 0;
    int i = 0;

    while (i < 32)
    {
        if (A & (1<<i))
        {
            count++;
        }
        i++;        
    }

    return count;
}
