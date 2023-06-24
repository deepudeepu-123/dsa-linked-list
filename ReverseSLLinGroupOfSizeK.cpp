class Solution
{
    public:
    struct node* rever(struct node* head,int k)
    {
     
        if(head==NULL||k==1)
        return head;
       
       int count=0;
        struct node* prev=NULL;
         struct node* cur=head;
          struct node* ahead=NULL;
          struct node* tail=cur;
       while(count<k&&cur!=NULL)
       {
           ahead=cur->next;
           cur->next=prev;
           prev=cur;
           cur=ahead;
           count++;
       }
       if(ahead!=NULL)
       {
         tail->next=rever(ahead,k);
       }
       return prev;
        
    }
    struct node *reverse (struct node *head, int k)
    { 
      return rever(head,k); 
    }
};
