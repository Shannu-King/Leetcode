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
    ListNode* deleteMiddle(ListNode* head) {
        int c=0;
        ListNode *temp=head;
        while(temp!=nullptr)
        {
            c++;
            temp=temp->next;
        }
        int i=0;
        temp=head;
        if(c==1)
        return nullptr;
        while(temp!=nullptr)
        {
            if(i==(c/2)-1)
            {
                temp->next=temp->next->next;
            }
            temp=temp->next;
            i++;
        }
        return head;
    }
};