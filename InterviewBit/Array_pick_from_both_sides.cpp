int Solution::solve(vector<int> &A, int B) {
    int wn_sz = A.size() - B;
    int sum = 0, total_sum = 0;

    for (int i = 0; i < A.size(); ++i)
    {
        total_sum += A[i];
    }

    for (int i = 0; i < wn_sz; ++i)
    {
        sum += A[i];
    }

    int ans = sum;

    for (int i = 1; i < A.size()-wn_sz; ++i)
    {
        sum += A[i+wn_sz-1] - A[i-1];
        ans = min(ans, sum);
    }

    return total_sum - ans;
}
