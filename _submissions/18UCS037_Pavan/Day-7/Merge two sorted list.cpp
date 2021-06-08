ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* result = NULL;
    if(A == NULL){
        return (B);
    }
    if(B == NULL){
        return (A);
    }
    
    if(A->val <= B->val){
        result = A;
        result->next = mergeTwoLists(A->next,B);
    }
    else{
        result = B;
        result->next = mergeTwoLists(A,B->next);
    }
    return (result);
    
}
