/*
~~~~~~~~~~~~~~~~~~~~~~~~~~ ALGORITHM ~~~~~~~~~~~~~~~~~
1. we will use 2 pointers to solve this (slow & fast)
2. initially slow=fast=head;
3. move fast n steps forward 
4. if fast==NULL that means we have to delete the first element so we delete it and return
5. otherwise, until fast or its next is not NULL move both slow and fast by 1 node
6. after the loop is finished(ie. fast or its next is NULL) then,
7. the node to delete is next node of slow so delete the node and return the head
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*slow=head;
        ListNode*fast=head;
        if(head==NULL || head->next==NULL) return NULL;
      
        //moving fast n steps forward
        for(int i=0;i<n;i++){
                fast=fast->next;
        }

        if(fast==NULL){//ie. we need to delete the first element
            head=head->next;
            return head;
        }
        while(fast!=NULL && fast->next!=NULL){
            
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }

};
