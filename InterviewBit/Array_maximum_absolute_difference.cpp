int Solution::maxArr(vector<int> &A) {
    int n = A.size();
    vector<int> diff;
    vector<int> add;
    
    for (int i = 0; i < n; ++i)
    {
        diff.push_back(A[i]-i);
        add.push_back(A[i]+i);
    }

    int mx_d = *max_element(diff.begin(), diff.end());
    int mn_d = *min_element(diff.begin(), diff.end());

    int mx_a = *max_element(add.begin(), add.end());
    int mn_a = *min_element(add.begin(), add.end());

    int res = max(abs(mx_d - mn_d), abs(mx_a - mn_a));

    return res;
}
