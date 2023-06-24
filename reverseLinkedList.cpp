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
        if(head==NULL||head->next==NULL) 
            return head;
        ListNode* prev=NULL;
        ListNode* cur=head;
        ListNode* nex;
        while(cur!=NULL) 
        {
          nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
            }
        
        return prev;
    }
    // recursive way
    ListNode* recur(ListNode* temp,ListNode* prev)
    {
        if(temp==NULL)
        return prev;
        ListNode* temp1=temp->next;
        temp->next=prev;
        return recur(temp1,temp);
    }
};