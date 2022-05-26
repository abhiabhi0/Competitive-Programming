int Solution::solve(vector<int> &A, int B) {
    unordered_map<int, int> freq;
    int xr = 0, cnt = 0;

    for (int x : A)
    {
        xr = xr ^ x;

        if (xr == B)
        {
            cnt++;
        }

        if (freq.find(xr^B) != freq.end())
        {
            cnt += freq[xr^B];
        }

        if (freq.find(xr) == freq.end())
        {
            freq.insert({xr, 1});
        }
        else  
        {
            freq[xr]++;
        }
    }

    return cnt;
}
