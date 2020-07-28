//iterative approach
// time-complexity - O(n)
void reverse(Node* head){
    Node* prev, *curr, *forw;
    prev = NULL;
    curr = head;
    if(curr)
    forw = curr->next;
    while(curr){
        curr->next = prev;
        prev = curr;
        curr = forw;
        if(curr)
        forw = curr->next;
    }
    return prev;
}

//recursive approach

Node* reverse(Node* head){
    if(head==NULL || head->next==NULL) return head;

    Node* rest = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}