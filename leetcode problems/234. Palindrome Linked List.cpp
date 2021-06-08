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
    bool isPalindrome(ListNode* head) {
        
        ListNode* n = head;
        vector<int> original;
        
        // iterating over the linked list
        while(n!=NULL){
            original.push_back(n->val);
            n = n->next;
        }
        
        int k = original.size()-1;
        
        // checking original vs reverse
        for(int i=0; i<=k; i++){
            if(original[i]!=original[k-i]) return false;
        }
        
        return true;
        
    }
};