int Solution::solve(vector<int> &A) {
    vector<int> pse(A.size());
    vector<int> pso(A.size());

    pse[0] = A[0];
    pse[1] = A[0];

    pso[0] = 0;
    pso[1] = A[1];
    pso[2] = A[1];

    for (int i = 2; i < A.size();)
    {
        pse[i] = pse[i-1] + A[i];
        if (i+1 < A.size())
        {
            pse[i+1] = pse[i];
        }
        i += 2;
    }

    for (int i = 3; i < A.size();)
    {
        pso[i] = pso[i-1] + A[i];
        if (i+1 < A.size())
        {
            pso[i+1] = pso[i];
        }        
        i += 2;
    }

    int count = 0;

    for (int i = 0; i < A.size(); ++i)
    {
        int sume = pse[i-1] + pso[A.size()-1] - pso[i];
        int sumo = pso[i-1] + pse[A.size()-1] - pse[i];

        if (sume == sumo)
        {
            count++;
        }
    }

    return count;
}
