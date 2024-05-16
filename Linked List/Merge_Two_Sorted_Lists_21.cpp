
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*a;
        ListNode*b;
        ListNode*c=new ListNode(100);
        ListNode*temp=c;
        a=list1;
        b=list2;
        while(a!=NULL && b!=NULL ){
            if(a->val<=b->val){
                temp->next=a;
                temp=temp->next;
                a=a->next;
            }
            else{
                temp->next=b;
                temp=temp->next;
                b=b->next;
            }
            
        }
        if(a==NULL){
            temp->next=b;
        }
        else{
            temp->next=a;
        }
        return c->next;
    }
};
