class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      int size1=0,size2=0;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=NULL)
        {
            size1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            size2++;
            
            temp2=temp2->next;
        }
         temp1=headA;
         temp2=headB;
        if(size1>size2)
        {
           
            for(int i=0;i<size1-size2;i++)
                temp1=temp1->next;
                
        }
        if(size1<size2)
        {
           
            for(int i=0;i<size2-size1;i++)
            temp2=temp2->next;
        }
        while(temp1!=NULL&&temp2!=NULL)
        {
            if(temp1==temp2)
                return temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
        //time complexity 0(n^2)
        // ListNode* temp1=headA;
        // ListNode* temp2;
        //  ListNode* temp3=headB;
        // while(temp1!=NULL)
        // {
        //     temp2=temp3;
        //     while(temp2!=NULL)
        //     {
        //        if(temp1->next==temp2->next) 
        //        {
        //            return temp1->next;
        //        }
        //         temp2=temp2->next;
        //     }
        //     temp3=temp3->next;
        //    temp1=temp1->next;
        // }
        // return NULL;
    }
};