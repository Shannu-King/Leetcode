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
    ListNode* reverseList(ListNode* head) {
        ListNode * root=nullptr;
        ListNode *temp=head;
        while(temp!=nullptr)
        {
            ListNode * newnode=new ListNode(temp->val);
            newnode->next=root;
            root=newnode;
            temp=temp->next;
        }
        return root;
    }
};