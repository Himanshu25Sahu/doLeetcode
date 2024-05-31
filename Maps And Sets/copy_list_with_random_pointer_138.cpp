
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node*dummy=new Node(0);
        Node*tempC=dummy;
        Node*temp=head;
        while(temp){
            Node*a=new Node(temp->val);
            tempC->next=a;
            tempC=tempC->next;
            temp=temp->next;

        }
        Node*b=dummy->next;
        Node*a=head;
        unordered_map<Node*,Node*>m;
        Node*tempa=a;
        Node*tempb=b;
        while(tempa!=NULL){
            m[tempa]=tempb;
            tempa=tempa->next;
            tempb=tempb->next;

        }
        for(auto x:m){
            Node*o=x.first;
            Node*d=x.second;
            if(o->random!=NULL){
                Node*oRandom=o->random;
                Node*dRandom=m[o->random];
                d->random=dRandom;
            }
        }
    return b;

    }
};
