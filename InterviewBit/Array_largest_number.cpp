string Solution::largestNumber(const vector<int> &A) {
    string res = "";
    int n = A.size();
    vector<string> str_num(n);

    static auto compare_num = [](string a, string b)
    {
        return a+b > b+a;
    };

    for (int i = 0; i < n; ++i)
    {
        str_num[i] = to_string(A[i]);
    }
    sort (str_num.begin(), str_num.end(), compare_num);

    for (int i = 0; i < n; ++i)
    {
        res += str_num[i];
    }

    int pos = 0;
    while (res[pos] == '0' && pos+1 < res.size())
    {
        pos++;
    }

    return res.substr(pos);
}
