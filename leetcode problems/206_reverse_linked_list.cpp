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
    ListNode* reverseList(ListNode* head) {
        
        // take 3 pointers
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* n;
        
        while(curr != NULL){
            // reversing one pointer
            n = curr->next;
            curr->next = prev;
            
            // updating previous and current pointers
            prev = curr;
            curr = n;
        }
        
        // updating head
        head = prev;
        
        return head;
    }
};