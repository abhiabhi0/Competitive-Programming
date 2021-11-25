vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n = A.size();
    vector< vector<int> > res;

    for (int i = 0; i < n; ++i)
    {
        int k = 0, j = i;

        vector<int> vec;
        while (k < n && j >= 0)
        {
            vec.push_back(A[k][j]);
            k++;
            j--;
        }
        res.push_back(vec);
    }

    for (int i = 1; i < n; ++i)
    {
        int k = i, j = n-1;

        vector<int> vec;
        while (k < n && j >= 0)
        {
            vec.push_back(A[k][j]);
            k++;
            j--;
        }
        res.push_back(vec);
    }

    return res;
}
