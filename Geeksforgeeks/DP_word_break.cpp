//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    bool func(int s, int e, string& A, set<string>& words)
    {
        if (s > e) return true;
        int i;
        for (i = s; i <= e; ++i)
        {
            if (words.find(A.substr(s, i-s+1)) != words.end() && func(i+1, e, A, words))
            {
                return true;
            }
        }
        return false;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        set<string> words;
        
        for (string& str : B)
        {
            words.insert(str);
        }
        
        return func(0, A.size()-1, A, words);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends
