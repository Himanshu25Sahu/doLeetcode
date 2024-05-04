/*
ALGORITHM:
1. the value to be added to the corresponding result node will be (l1->val + l2->val + carry)%10 initially carry =0
2. for eg. if the list node is as 2 4 3 and 5 6 4 then first node of res will be 2+5+0 = 7
3. carry is updated by dividing the result with 10(will return 0 if result < 10 but returns the 10's digit if result>10
4. initially we create a dummy node to create a list and store the head of it in "head3"
5. traverse till any of the list pointers are not NULL and follow this operations
6. after the first traversal check if any of the list pointers is not NULL
7. visit the unvisited list and apply the same algorithm while traversing 
8. at the end return res->next (because first node in res is dummy node)


::: DRY RUN :::
--------------- 1 ---------------
[ list 1 ]
2  4  3
l1

[List 2]
5  6  4
l2

[Result]
0
res
head3

-------------- 2 ----------------
[ list 1 ]
2  4  3
l1

[List 2]
5  6  4
l2

[Result]
0  ->  7
h3    res

[carry]
0
-------------- 3 --------------
[ list 1 ]
2  4  3
   l1

[List 2]
5  6  4
   l2

sum=6+4+0 = 10
res->next=new Node(10%10)
carry=10/10=1;

[Result]
0  ->  7  ->  0
h3           res


------------- 4 --------------------
[ list 1 ]
2  4  3
      l1

[List 2]
5  6  4
      l2

sum=4+3+1 = 8
res->next=new Node(8%10)
carry=8/10=0;

[Result]
0  ->  7  ->  0  ->  8
h3                  res

------------- 5 --------------
Loop over as l1=null and l2=null
return h3->next {ie. node 7}

*/


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*res=new ListNode(0);
        ListNode*head3=res;
        int c=0;

        while(l1 && l2){
            int value=l1->val + l2->val + c;
            
            c=value/10;
            res->next=new ListNode(value%10);;
            l1=l1->next;
            l2=l2->next;
            res=res->next;
            
        }
        ListNode*remain=(l1!=NULL && l2==NULL)?l1:l2;

        while(remain){
            int value=remain->val + c;
            ListNode*newNode=new ListNode(value%10);
            c=value/10;
            res->next=newNode;
            remain=remain->next;
            res=res->next;
            
        }
        if(c){
            res->next=new ListNode(c);
        }
        return head3->next;
    }
};
