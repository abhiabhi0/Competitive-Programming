int Solution::perfectPeak(vector<int> &A) {
    int n = A.size();
    vector<int> mx_arr(n, 0);
    vector<int> mn_arr(n, 0);

    int mx = A[0];
    int mn = A[n-1];

    for (int i = 1; i < n; ++i)
    {
        mx = max(mx, A[i-1]);
        mx_arr[i] = mx; 
    }

    for (int i = n-2; i >= 0; i--)
    {
        mn = min(mn, A[i+1]);
        mn_arr[i] = mn; 
    }

    for (int i = 1; i < n-1; ++i)
    {
        if (A[i] > mx_arr[i] && A[i] < mn_arr[i])
        {
            return 1;
        }
    }

    return 0;
}
