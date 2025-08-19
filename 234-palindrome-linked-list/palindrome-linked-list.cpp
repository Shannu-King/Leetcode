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
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        int ans1=0,ans2=0;
        ListNode* temp=head;
       while(temp!=nullptr){
        st.push(temp->val);
        temp=temp->next;
       }
       temp=head;
       while(temp!=nullptr){
         ans2=st.top();
        st.pop();
        if(ans2!=temp->val) return false;
        temp=temp->next;
       }
       return true; 
    }
};
   