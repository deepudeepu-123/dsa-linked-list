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
   ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr && curr->next) {
            ListNode* next_node = curr->next;
            curr->next = next_node->next;
            next_node->next = curr;
            if (prev) {
                prev->next = next_node;
            } else {
                head = next_node;
            }
            prev = curr;
            curr = curr->next;
        }
        return head;        
    }

};