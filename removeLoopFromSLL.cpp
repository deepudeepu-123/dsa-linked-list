class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head!=NULL&&head->next!=NULL)
        {
            Node* slow=head;
            Node* fast=head;
            while(fast!=NULL&&fast->next!=NULL)
            {
                slow=slow->next;
                fast=fast->next->next;
                if(slow==fast)
                break;
            }
            
            if(slow==fast)
            {
                slow=head;
              
                while(slow!=fast)
                {
                    
                    slow=slow->next;
                    fast=fast->next;
                }
                //where loop starts ,iterate from node where loop start to node which point to that node
                Node* cur=slow;
                while(cur->next!=slow)
                cur=cur->next;
                cur->next=NULL;
                return;
            }
        }
    }
};