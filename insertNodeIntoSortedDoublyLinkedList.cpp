DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
 DoublyLinkedListNode* temp = new DoublyLinkedListNode(data);
    if (!llist) { 
        return temp;
    }
    else if (data <= llist->data) { 
        temp->next = llist;
        llist->prev = temp;
        return temp;
    }
    else { 
        DoublyLinkedListNode* curr = llist;
        while (curr->next && curr->next->data < data) {
            curr = curr->next;
        }
        if (curr->next) { 
            curr->next->prev = temp;
            temp->next = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
        return llist;
    }
    
}