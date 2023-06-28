//create a linked list which contents intersecting nodes of two linked lists
//for example:- first SLL 1->2->3->4->NULL;  second SLL  2->4->6->8->NULL;
//resultant linked list:- 2->4->NULL;

Node* findIntersection(Node* head1, Node* head2)
{
 if(head1==NULL||head2==NULL)
 return NULL;
 Node* head=NULL;
 Node* tail=NULL;
 while(head1!=NULL&&head2!=NULL)
 {
     if(head1->data==head2->data)
     {
         if(head==NULL)
         {
             Node* node=new Node(head1->data);
             head=tail=node;
         }
         else
         {
             Node* node=new Node(head1->data);
             tail->next=node;
             tail=node;
             
         }
          head1=head1->next;
          head2=head2->next;
     }
     else if(head1->data>head2->data)
     {
         head2=head2->next;
     }
     else
     head1=head1->next;
 }
 return head;
 
}