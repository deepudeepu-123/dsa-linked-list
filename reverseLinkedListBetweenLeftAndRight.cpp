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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL||head->next==NULL||left==right)
            return head;
        
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
       ListNode*  temp=dummy;
        for(int i=0;i<left-1;i++)
            temp=temp->next;
        ListNode* prev=NULL;
        ListNode* ahead;
        ListNode* temp1=temp->next;
        for(int i=left;i<=right;i++)
        {
            ahead=temp1->next;
            temp1->next=prev;
            prev=temp1;
            temp1=ahead;
        }
       temp->next->next=temp1;
        temp->next=prev;
        return dummy->next;
            
    }
       
};