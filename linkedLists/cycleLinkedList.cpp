bool findCycle(Node* head)
{
    Node* slow = head, *fast = head;
    bool foundCycle = fasle;
    while(fast!=NULL && fast->next!=NULL)
    {
        if(slow == fast){
            foundCycle = true;
            slow = head;
            while(slow!=fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            break;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    if(foundCycle){
        printCycle(slow);
        return true;
    } 
    else return false;
}

bool printCycle(Node* root){
    Node* temp = root;
    cout<<root->data<<" ";
    root = root->next;
    while(root!=temp){
        cout<<root->data<<" ";
        root = root->next;
    }
}