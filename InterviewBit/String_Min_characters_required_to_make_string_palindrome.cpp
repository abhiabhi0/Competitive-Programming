int Solution::solve(string A) {
    int n = A.size();
    int j = n-1;
    int i = 0;

    while (i <= j)
    {
        if (A[i] == A[j])
        {
            i++;
            j--;
        }
        else if (i > 0 && A[i] != A[j])
        {
            i = 0;
        }
        else if (A[i] != A[j])
        {
            j--;
        }
    }
    int palin_size = j+1 + i;

    return n - palin_size;
}
