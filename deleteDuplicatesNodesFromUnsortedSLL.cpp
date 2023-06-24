class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     if(head==NULL||head->next==NULL)
     return head;
     unordered_set<int> seen;
     Node* cur=head;
      Node* prev=NULL;
     while(cur!=NULL)
     {
         if(seen.find(cur->data)!=seen.end())
         {
            
             prev->next=cur->next;
             
             delete cur;
            
             cur=prev->next;
         }
         else
         {
             seen.insert(cur->data);
             prev=cur;
             cur=cur->next;
         }
     }
     return head;
    }
};