/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// Question link:- https://leetcode.com/problems/swap-nodes-in-pairs/

class Solution {
public:
    void makeArray(ListNode*head,vector<int> &ans)
    {
        while(head)
        {
            ans.push_back(head->val);
            head = head->next;
        }
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode * temp = head;
        ListNode * temp2 = head;
        
        
        vector<int> ans;
        makeArray(temp,ans);
        int n  = ans.size();
        swap(ans[k-1],ans[n-k]);
        int i = 0;
        while(temp2)
        {
            temp2->val = ans[i];
            i++;
            temp2= temp2->next;
        }
        return head;
        
        
    }
};