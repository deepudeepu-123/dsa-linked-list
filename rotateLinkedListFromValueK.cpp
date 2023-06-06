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
    ListNode* rotateRight(ListNode* head, int k) {
//                 if (head == NULL || head->next == NULL) {
//             return head;
//         }
//         ListNode* dummy = head;
//         int len = 1;
//         while (dummy->next != NULL) {
//             len++;
//             dummy = dummy->next;
//         }
//         dummy->next = head;
//         k = k % len;
//         int end = len - k;
//         dummy = head;
//         while (end > 1) {
//             end--;
//             dummy = dummy->next;
//         }
//         head = dummy->next;
//         dummy->next = NULL;

//         return head;

         if(k==0||head==NULL||head->next==NULL) 
            return head;
        int n=1;
        ListNode *t1=head,*t2,*t3;
        while(t1->next!=NULL) 
        {
          n++;
            t1=t1->next;
        }
        t1->next=head;
        k=k%n;
        t1=head;
        for(int i=0;i<n-k-1;i++) 
        {
         t1=t1->next; 
        }
        head=t1->next;
        t1->next=NULL;
        t3=t2;
        
    
        return head;
    //    if(head == NULL||head->next == NULL) return head;
    // for(int i=0;i<k;i++) {
    //     ListNode* temp = head;
    //     while(temp->next->next != NULL) temp = temp->next;
    //     ListNode* end = temp->next;
    //     temp->next = NULL;
    //     end->next = head;
    //     head = end;
    // }
    // return head;
    }
};