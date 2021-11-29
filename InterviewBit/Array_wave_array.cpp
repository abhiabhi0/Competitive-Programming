vector<int> Solution::wave(vector<int> &A) {
    int n = A.size();
    sort(A.begin(), A.end());

    for (int i = 0; i < n-1; i+=2)
    {
        A[i] = A[i]^A[i+1];
        A[i+1] = A[i]^A[i+1];
        A[i] = A[i]^A[i+1];
    }

    return A;
}
