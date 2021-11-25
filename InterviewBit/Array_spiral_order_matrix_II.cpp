vector<vector<int> > Solution::generateMatrix(int A) {
    vector< vector <int> > res(A, vector<int>(A, 0));
    int val = 1;
    int t = 0, l = 0, r = A-1, b = A-1;

    while (val <= A*A)
    {
        for (int i = l; i <= r; ++i)
        {
            res[t][i] = val;
            val++;
        }
        t++;

        for (int i = t; i <= b; i++)
        {
            res[i][r] = val;
            val++;
        }
        r--;

        for (int i = r; i >=  l; i--)
        {
            res[b][i] = val;
            val++;
        }
        b--;

        for (int i = b; i >= t; i--)
        {
            res[i][l] = val;
            val++;
        }
        l++;
    }

    return res;
}
