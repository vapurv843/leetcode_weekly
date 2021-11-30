// Question link:- https://leetcode.com/problems/sliding-window-maximum/submissions/

class Solution {
public:
    void nge1(vector<int>& arr,vector<int> &ans)
    {
        int n = arr.size();
        stack<long long> st;
        for(int i = n-1;i>=0;i--)
        {
            if(!st.empty())
            {
                while(!st.empty() and arr[st.top()]<=arr[i])
                {
                    st.pop();
                }
                
            }
            if(st.size()==0)
            {
                ans[i] = n;
            }
            else
            {
                ans[i] = st.top();
            }
            st.push(i);
        }
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> nge(n) ;
        vector<int> ans;
        nge1(nums,nge);
        int j = 0;
        for(int i = 0;i<=n-k;i++)
        {
            if(j<i)
            {
                j=i;
            }
            while(nge[j]<i+k)
            {
                j = nge[j];
            }
            ans.push_back(nums[j]);
            
        }
        return ans;
    }
};