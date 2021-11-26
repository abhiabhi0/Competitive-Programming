int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    vector<int> arr(n+1, 0);

    for (int i = 0; i < n; ++i)
    {
        if (arr[A[i]] < 1)
        {
            arr[A[i]]++;
        }
        else
        {
            return A[i];
        }
    }

    return -1;
}
