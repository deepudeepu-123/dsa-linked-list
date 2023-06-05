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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
         ListNode* t2=l2;
         ListNode* dummy=new ListNode();
         ListNode* temp=dummy;
        int sum,carry=0;
        while(t1!=NULL||t2!=NULL||carry==1)
        {
            sum=0;
         if(t1!=NULL)
         {
            sum+=t1->val;
            t1=t1->next;
         }
         if(t2!=NULL)
         {
             sum+=t2->val;
             t2=t2->next;
         }
            sum+=carry;
             ListNode* fast=new  ListNode();
            fast->val=sum%10;
            carry=sum/10;
           temp->next=fast;
           temp=temp->next;
            
        }
        return dummy->next;
    }
};