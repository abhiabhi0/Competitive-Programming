/*
Node structure is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// modify the BST and return its root
void get_values(Node* root, vector<int>& v)
{
    if (root == nullptr)
        return;
        
    v.push_back(root->data);
    get_values(root->left, v);
    get_values(root->right, v);
}

void modify_tree(Node *root, unordered_map<int,int>& um)
{
    if (root == nullptr)
    {
        return;
    }
    
    root->data = um[root->data];
    modify_tree(root->left, um);
    modify_tree(root->right, um);
    return;
    
}

Node* modify(Node *root)
{
    // Your code here
    vector<int> vec;
    
    get_values(root, vec);
    sort(vec.begin(), vec.end());
    
    int n = vec.size();
    unordered_map<int, int> um;
    int sum = 0;
    
    for (int i = n-1; i >= 0; i--)
    {
        sum += vec[i];
        if (um.find(vec[i]) == um.end())
        {
            um.insert({vec[i], sum});
        }
        else 
        {
            um[vec[i]] = sum;
        }
    }
    
    modify_tree(root, um);
    return root;
}
