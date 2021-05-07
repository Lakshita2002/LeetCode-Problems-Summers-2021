void breakCycle(node* head){
    node* fast = head;
    node* slow = head;

    while(fast and fast->next){
        fast = fast->fast->next;
        slow = slow->next;

        if(fast == slow){
            break;
        }
    }

    node* prev = head;
    slow = head;
    while(prev->next != fast){
        prev = prev->next;
    }

    while(fast!=slow){
        prev = fast;
        fast = fast->next;
        slow = slow->next;
    }

    prev->next = NULL;
}