/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       
        ListNode *slow=head;
        ListNode *fast=head;
        if(head==NULL||head->next==NULL||head->next->next==NULL)
        return NULL;
        slow=slow->next;
        fast=fast->next->next;
        while(fast!=slow&&fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast==slow)
        {
            slow=head;
            while(slow!=fast)
            {
                fast=fast->next;
                 slow=slow->next;
            }
            return slow;
        }
        else
        return NULL;
    }
};