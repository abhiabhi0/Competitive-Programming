int is_prime(int n)
{
    for (int i = 2; i*i <= n; ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

vector<int> Solution::primesum(int A) {
    vector<int> res;

    for (int i = 2; i <= A/2; ++i)
    {
        if (is_prime(i) && is_prime(A-i))
        {
            res.push_back(i);
            res.push_back(A-i);
            return res;
        }
    }
}
