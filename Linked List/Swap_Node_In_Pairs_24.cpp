
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode*temp=head;
        int x;
        if(temp==NULL || temp->next==NULL){
            return head;
        }
        while(temp!=NULL && temp->next!=NULL){
            x=temp->next->val;
            temp->next->val=temp->val;
            temp->val=x;
            temp=temp->next->next;
            

        }
        return head;
    }
};
