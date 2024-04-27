

class Solution {
public:

    void createPara(int open,int close,string str,vector<string>&ans,int n){
        if(open==n && close==n){
            ans.push_back(str);
            return;
        }
        if(close==open){

            createPara(open+1,close,str+"(",ans,n);
        }
        else{
            if(open==n){
                createPara(open,close+1,str+")",ans,n);
            }
            else{
                createPara(open+1,close,str+"(",ans,n);
                createPara(open,close+1,str+")",ans,n);
            }
        }
        
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;

        createPara(0,0,"",ans,n);
        return ans;
    }
};
