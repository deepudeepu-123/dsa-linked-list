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

//Add two number represented by linked list 
//for example: first linked list 1->2->3->4->NULL  second linked list 2->3->4->NULL
//resultant linked list 1->4->6->8->NULLs
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

    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        if(first==NULL||second==NULL)
        return NULL;
        struct Node  *prev=NULL,*cur=first,*ahead;
        //reverse the first linked list;
        while(cur!=NULL)
        {
            ahead=cur->next;
            cur->next=prev;
            prev=cur;
            cur=ahead;
        }
        //assign the previous pointer to the first pointer;
        //it is the new head of the first linked list;
        first=prev;
        
        prev=NULL;
        cur=second;
        
        //reverse the second linked list;
        while(cur!=NULL)
        {
            ahead=cur->next;
            cur->next=prev;
            prev=cur;
            cur=ahead;
        }
        //assign the previous pointer to the second pointer;
        //it is the new head of the second linked list;
        second=prev;
        
        int carry=0;
        int sum;
        //creating the linked list for the answer;
        struct Node  *head=NULL,*tail=NULL;
         
        while(first!=NULL||second!=NULL)
        {
            sum=carry;
            if(first!=NULL)
            {
              sum+=first->data;  
              first=first->next;
            }
            if(second!=NULL)
            {
             sum+=second->data;
             second=second->next;
            }
            
            carry=sum/10;
            sum=sum%10;
            
             struct Node* node=new Node(sum);
             if(head==NULL)
             {
                 head=tail=node;
             }
             else
             {
                tail->next=node;
                tail=node;
             }
            
        }
        
         if(carry == 1)
         {
           struct Node* node = new Node(1);
           if(head== NULL)
             {
               head=tail=node;
             }
            else
             {
              tail->next = node;
              tail = node;
            }
         } 
        prev=NULL;
        cur=head;
        while(cur!=NULL)
        {
            ahead=cur->next;
            cur->next=prev;
            prev=cur;
            cur=ahead;
        }
        return prev;
        
    }