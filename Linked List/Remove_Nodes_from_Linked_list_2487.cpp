
class Solution {
public:

    //function to reverse the LL
    ListNode* reverse(ListNode*head){
        if(!head) return NULL;
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*front=head;
        while(curr){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;

    }

    ListNode* removeNodes(ListNode* head) {
        ListNode* reversed = reverse(head);
        head = reversed;
        ListNode* prev = reversed;
        ListNode* curr = reversed->next;
        int maxval = reversed->val;

        while (curr) {
            if (curr->val < maxval) {
                prev->next = curr->next;
                
                curr = prev->next;
            } else {
                maxval = curr->val;
                prev = curr;
                curr = curr->next;
            }
        }

        return reverse(reversed);
    
    }
};
