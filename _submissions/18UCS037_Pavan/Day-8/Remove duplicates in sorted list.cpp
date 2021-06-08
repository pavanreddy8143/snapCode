ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* head = A;
    while(head!=NULL && head->next!=NULL){
        if(head->val==head->next->val){
          ListNode* temp = head->next;
          head->next= temp->next;
          free(temp);
          continue;
        }
        else{
            head=head->next;
        }
    }
    return A;

}
