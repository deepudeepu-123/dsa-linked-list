class Solution
{
    public:
     //Function to find first node if the linked list has a loop
    int findFirstNode(Node* head)
    {
        if(head==NULL||head->next==NULL)
        return -1;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            break;
        }
        if(slow!=fast)
        return -1;
        else
        {
            slow=head;
            while(fast!=slow)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow->data;
    }
};