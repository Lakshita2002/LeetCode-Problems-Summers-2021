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
    ListNode* removeElements(ListNode* head, int val) {
        
        // making sure no memory leak occurs
        
        ListNode* n = head;
        while(n != NULL){
            
            if(head->val == val){
                head = head->next;
                delete n;
                n = head;
            }
            else if(n->next != NULL and n->next->val == val){
                ListNode* del = n->next;
                n->next = n->next->next;
                delete del;
            }
            else{
                n=n->next;
            }          
            
        }
        
        return head;
    }
};