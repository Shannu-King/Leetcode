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
        stack<ListNode *>st;
        ListNode *temp=head;
        
        while(temp)
        {
            st.push(temp);
            temp=temp->next;
        }
         if (st.empty()) return nullptr;
       
         ListNode * newhead=st.top();
     
      st.pop();
      temp=newhead;
        while(!st.empty())
        {
          temp->next=st.top();
                     st.pop();
          temp=temp->next;

            
        }
        temp->next=nullptr;
        return newhead;
    }
};