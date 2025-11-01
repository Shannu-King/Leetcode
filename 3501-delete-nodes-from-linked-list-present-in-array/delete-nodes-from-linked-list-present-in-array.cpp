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
    ListNode* modifiedList(vector<int>&a, ListNode* head) {
        ListNode  *temp=head;
        vector<int>b;
        while(temp!=NULL)
        {
            b.push_back(temp->val);
            temp=temp->next;
        }
      int freq[1000000]={0};
      for(int i=0;i<a.size();i++)
      {
        freq[a[i]]++;
      }
      for(int j=0;j<b.size();j++)
      {
        if(freq[b[j]]>0)
        {
            b.erase(b.begin()+j);
            j--;
        }
      }
      temp=head;
      for(int i=0;i<b.size();i++)
      {
        temp->val=b[i];
        if(i==b.size()-1)
        temp->next=NULL;
        temp=temp->next;

      }
      return head;
      
    }
};