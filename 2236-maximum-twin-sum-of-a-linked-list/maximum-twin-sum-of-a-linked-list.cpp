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
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>res;
        ListNode *temp=head;
        while(temp!=nullptr)
        {
            res.push_back(temp->val);
            temp=temp->next;
        }
        int n=res.size();
        int maxx=INT_MIN;
        for(int i=0;i<n/2;i++)
        {
            maxx=max(maxx,res[i]+res[n-1-i]);
        }
    return maxx;
    }
};