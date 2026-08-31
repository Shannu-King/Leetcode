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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int fc=0;
        int sc=0;
        int prev=0;
        int cc=0;
       
        int minn=INT_MAX;
        ListNode *prev1=head->next;
        ListNode *prev2=head;
        int i=1;
        ListNode *curr=head->next->next;
        while(curr!=nullptr)
        {
            if(prev1->val>prev2->val&&prev1->val>curr->val||(prev1->val<prev2->val&&prev1->val<curr->val))
            {
                if(fc==0)
                fc=i;
                prev=cc;
                cc=i;
                if(prev!=0)
                minn=min(cc-prev,minn);
              //  cout<<cc<<" "<<prev<<endl;
                //cout<<prev1->val<<" "<<i<<endl;

            }
            curr=curr->next;
            prev1=prev1->next;
            prev2=prev2->next;

            i++;
        }
        if(prev==0)
        return {-1,-1};
        return {minn,cc-fc};

    }
};