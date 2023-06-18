SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    if (llist == NULL) {
        return NULL;
    }
    SinglyLinkedListNode* current = llist;
    while (current->next != NULL) {
        if (current->data == current->next->data) {
            SinglyLinkedListNode* temp = current->next;
            current->next = temp->next;
            delete temp;
        } else {
            current = current->next;
        }
    }
    return llist;
}