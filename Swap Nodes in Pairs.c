struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *start = NULL, *prev = head, *temp;
    if (head == NULL || head->next == NULL)
        return head;    
    start = head->next;
     while(head != NULL && head->next != NULL)
    {
        temp = head->next->next;
        prev->next = head->next;
        head->next->next = prev = head;
        head->next = temp;
        head = head->next;
         
    }
    return start;    
}