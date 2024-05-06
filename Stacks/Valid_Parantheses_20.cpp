/*
<<<<<<<<<<<<<<<<<< ALGORITHM >>>>>>>>>>>>>>>
1. we use stacks to keep track of parantheses pairs
2. traverse the string, while traversing:
3. if the character is any type of open bracket then push its closing version
4. else, the bracket is a closing bracket then,
      - if the char at top is not equal to current char then return false or if we encounter an closing bracket and the stack is empty,
        ie. no open bracket encountered till now so we return false.
      - otherwise, ie. the char at top of stack is same as current char ie. its opening bracket so pop it 
5. at the end if stack's size is still not zero (if a pair not present) then return false otherwise return true

*/


class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='(') st.push(')');
            else if(c=='[') st.push(']');
            else if(c=='{') st.push('}');
            else{ //C IS A CLOSING BRACKET
                if(st.size()==0 || st.top()!=c) return false;
                else st.pop();
            }
        }
        if(st.size()) return false;
        else return true;
    }
};
