// find the kth element from the end of the linked list
// solve without finding the length of the linked list
// 2 pointer approach
// move the first one till k positions
// then move both till the first one reaches null

int kFromLast(node* head, int k){

    node* ref = head;
    node* act = head;

    for(int i=0; i<k; i++){
        ref = ref->next;
    }

    while(ref){
        ref = ref->next;
        act = act->next;
    }

    return act->data;
}