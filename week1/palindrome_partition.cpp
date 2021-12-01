//Question link:- https://leetcode.com/problems/palindrome-partitioning/

class Solution {
public:
    bool ispalindrome(string s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
            {
                return false;
            }
        }
        return true;
    }
    void solve(string s,vector<vector<string>> &ans,vector<string> &ds,int index)
    {
        if(index == s.size())
        {
            ans.push_back(ds);
        }
        for(int i = index;i<s.size();i++)
        {
            if(ispalindrome(s,index,i))
            {
                ds.push_back(s.substr(index,i-index+1));
                solve(s,ans,ds,i+1);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        solve(s,ans,ds,0);
        return ans;
        
        
    }
};