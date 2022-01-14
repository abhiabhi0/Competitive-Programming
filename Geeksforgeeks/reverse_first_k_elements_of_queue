queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> s;
    int n = q.size();
    for (int i = 0; i < k; ++i)
    {
        s.push(q.front());
        q.pop();
    }
    
    queue<int> res;
    
    for (int i = 0; i < k; ++i)
    {
        res.push(s.top());
        s.pop();
    }
    
    for (int i = 0; i < n - k; ++i)
    {
        res.push(q.front());
        q.pop();
    }
    return res;
    // add code here.
}
