
class Solution {
public:
    ListNode* reverse(ListNode*head){
        ListNode*prev=NULL;
        ListNode*front=head;
        ListNode*curr=head;
        while(curr){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        head=reverse(head);
        int carry=0;
        ListNode*temp=head;
        ListNode*res=new ListNode(0);
        ListNode*reshead=res;
        while(temp){
            int mul=temp->val*2+carry;
            carry=mul/10;
            mul=mul%10;

            reshead->next=new ListNode(mul);
            reshead=reshead->next;
            temp=temp->next;
        }
        if(carry){
            reshead->next=new ListNode(carry);
        }
        return reverse(res->next);
        
    }
};
