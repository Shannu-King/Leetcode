/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
struct ListNode *temp=head;
int count=0;
while(temp!=NULL)
{
    count++;
    temp=temp->next;
}
temp=head;
int sum=0;
int i=0;
while(temp!=NULL)
{
sum+=temp->val*pow(2,count-1-i);
temp=temp->next;
i++;
}
return sum;

}