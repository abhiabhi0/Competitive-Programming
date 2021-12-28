string Solution::solve(string A) {
    int n = A.size();
    int mx = INT_MIN;
    string res = "";
    int idx = -1;

    if (n == 1)
    {
        return "-1";
    }

    for (int i = n-1; i >= 0; i--)
    {
        if (A[i] >= mx)
        {
            mx = A[i];
        }
        else if (A[i] < mx)
        {
            idx = i;
            break;
        }
    }
    
    if (idx != -1)
    {
        int mn = INT_MAX;
        int idx2 = -1;

        for (int i = idx+1; i < n; ++i)
        {
            if (A[i] > A[idx] && A[i] < mn)
            {
                mn = A[i];
                idx2 = i;
            }
        }

        if (idx > 0)
        {
            res += A.substr(0, idx);
        }
        res += A[idx2];

        string tmp = "";

        tmp += A.substr(idx, idx2-idx);
        if (idx2+1 < n)
        {
            tmp += A.substr(idx2+1, n-idx2-1);
        }
        sort(tmp.begin(), tmp.end());
        res += tmp;

        return res;
    }
    return "-1";
}
